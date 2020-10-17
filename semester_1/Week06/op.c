#include <stdio.h>

#include "op.h"

void logical(int intv){
#ifdef DEBUG
    printf("enter logical, intv is 0x%x\n", intv);
#endif // DEBUF
    int result;
    result=intv&0x10;
    printf("result=intv&0x10, result is 0x%x\n",result);
    result|=0xf;
    printf("result|=0xf, result is 0x%x\n",result);
    result^=4;
    printf("result^=0xf, result is 0x%x\n",result);
    result<<=1;
    printf("result<<=1, result is 0x%x\nv",result);
    result>>=2;
    printf("result>>=2, result is 0x%x\nv",result);
    result=~1;
    printf("result=~1, result is 0x%x\nv",result);


}

void arit(int intv, float floatv){
#ifdef DEBUG
    printf("enter arit, intv is %d, floatv is %f\n",intv, floatv);
#endif // DEBUG
    int i_result;
    float f_result;

    i_result = intv++;
    printf("i_result = intv++, intv is %d, i_result is %d\n",intv , i_result);

    i_result = ++intv;
    printf("i_result = ++intv, intv is %d, i_result is %d\n",intv , i_result);

    i_result = intv--;
    printf("i_result = intv--, intv is %d, i_result is %d\n",intv , i_result);

    i_result = --intv;
    printf("i_result = --intv, intv is %d, i_result is %d\n",intv , i_result);

    i_result+=intv;
    printf("i_result+=intv, intv is %d, i_result is %d\n",intv , i_result);

    i_result-=intv;
    printf("i_result-=intv, intv is %d, i_result is %d\n",intv , i_result);

    i_result*=intv;
    printf("i_result*=intv, intv is %d, i_result is %d\n",intv , i_result);

    i_result/=intv;
    printf("i_result/=intv, intv is %d, i_result is %d\n",intv , i_result);

    i_result%=intv;
    printf("i_result%%=intv, intv is %d, i_result is %d\n",intv , i_result);

    f_result = floatv;
    f_result+=floatv;
    printf("f_result+=floatv, floatv is %f, f_result is %f\n",floatv , f_result);

    f_result*=floatv;
    printf("f_result*=floatv, floatv is %f, f_result is %f\n",floatv , f_result);

    f_result/=floatv;
    printf("f_result/=floatv, floatv is %f, f_result is %f\n",floatv , f_result);


}

void rel(int a, int b){
#ifdef DEBUG
    printf("enter rel, a is %d, b is %d\n",a ,b);
#endif // DEBUG
    if(a==FIRST)
        printf("a==FIRST\n");
    if(a!=SECOND)
        printf("a!=SECON\n");
    if(a==FIRST && b==SECOND)
        printf("a==FIRST && b==SECOND\n");
    if(a==FIRST || b==SECOND)
        printf("a==FIRST || b==SECOND\n");
    if(a)
        printf("a is not 0\n");

    if(!a)
        printf("a is 0\n");

}

void pass(int intv){
    printf("inside pass, intv is %d\n", ++intv);

}

