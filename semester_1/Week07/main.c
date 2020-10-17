#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main()
{
    int f=FIRST, s=SECOND;

    printf("Pointer demo f is %d, s is %d!\n",f,s);
#ifdef PTR
    inc(&f, &s);
    printf("After inc f is %d, s is %d\n",f,s);
    swap(&f,&s);
    printf("After swap f is %d, s is %d\n",f,s);
    inc(NULL, NULL);
    inc(NULL, NULL);
#else
    inc(f, s);
    printf("After inc f is %d, s is %d\n",f,s);
    swap(f, s);
    printf("After swap f is %d, s is %d\n",f,s);
#endif // PTR

    return 0;
}
