#include <stdlib.h>

#include "util.h"

#ifdef PTR
void inc(int *a, int *b){
    //if (a!= NULL)
        ++*a;
    if (b)
        ++*b;
}

void swap(int *a, int *b){
    if (!(a&&b))
        return;
    int tmp = *a;
    *a=*b;
    *b=tmp;
}

#else

void inc(int a, int b){
    ++a;
    ++b;
}

void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

#endif // PTR
