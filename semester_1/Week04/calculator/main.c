#include <stdio.h>
#include <stdlib.h>

#include "calculator.h"

void usage()
{
    printf("For example 3+2 is 3 2 + =\n");
    printf("Operators +-*/=c\n");
    printf("Quit : q\n");
}

int main()
{
    printf("Reverse Polish Logic Calculator\n\n");
    usage ();
    calculator();
    return 0;
}
