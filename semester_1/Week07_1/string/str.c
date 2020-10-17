#include <stdlib.h>

#include "str.h"

#ifdef COOL_PROGRAMMER

int strlen1(const char *str ){
    if(!str)
        return 0;
    char *b=str;
    while(*str++)
        ;

    return str-b-1;
}

char *strcpy1(char *to, const char *from){
    if(!(to&&from))
        return to;
    char *b=to;
    while(*to++=*from++)
        ;

    return to;
}


#else

int strlen1(const char str[] ){
    int i=0;
    for(;str[i]!='\0';++i)
        ;
    return i;
}

char *strcpy1(char to[], const char from[]){
    int i=0;
    for(;from[i]!='\0';++i)
        to[i]=from[i];

    to[i]='\0';
    return to;
}


#endif // COOL_PROGRAMMER
