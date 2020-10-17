#include <stdio.h>
#include <stdlib.h>

#include "file.h"

void help(char *prg){
printf("Usage: %s <filename>\n",prg);
}
int main(int argc, char **argv)
{
    printf("File cat demo!\n");
    if(argc==1){
        help(argv[0]);
        return EXIT_FAILURE;
    }

    return file(argv[1]);
}
