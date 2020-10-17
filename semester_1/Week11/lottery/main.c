#include <stdio.h>
#include <stdlib.h>

#include "lottery.h"
void help(const char *prg)
{
    printf("Usage %s <5|6|euro> [tickets]\n", prg);
}

int main(int argc, char **argv)
{
    printf("Lottery generator\n");
    if (argc==1)
    {
        help(argv[0]);
        return EXIT_FAILURE;
    }
    return process(argc, argv);
}
