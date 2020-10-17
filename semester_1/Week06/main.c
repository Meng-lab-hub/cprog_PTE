#include <stdio.h>
#include <stdlib.h>

#include "op.h"

int main()
{
    printf("Operations demo!\n");
    int int_val=INIT_VALUE;
    float float_val=INIT_VALUE;
    int pass_val=INIT_VALUE;

    logical(int_val);
    arit(int_val, float_val);
    rel(int_val, ZERO);
    rel(FIRST, ZERO);
    rel(FIRST, SECOND);
    printf("before pass, pass_val is:%d\n",pass_val);
    pass(pass_val);
    printf("after pass, pass_val is:%d\n",pass_val);

    return 0;
}
