/*TELEPHONE NUMBER VALIDATOR*/
/*Program's objectives are to check the validity of a number and to find the country it is corresponding to*/
#include <stdio.h>
#include <stdlib.h>

#include "header.h"

void help(char *prg) {
    printf("Usage: %s", prg);
}

int main(int argc, int *argv[])
{
    if(argc==1){
        help(argv[0]);
        return EXIT_FAILURE;
    }

    return process(argv[1]); //Even though user enters more than one number, we simply ignore others and select the first one
}
