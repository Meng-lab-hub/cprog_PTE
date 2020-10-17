#include <stdio.h>
#include <stdlib.h>

#include "time.h"

void help(const char *prg)
{
    printf("Usage: %s <date & time>\nformat : %s\n",
           prg, PARSE_FORMAT);
}
int main(int argc, char **argv)
{
    printf("Date demo\n");
    if (argc==1)
    {
        help(argv[0]);
        return EXIT_FAILURE;
    }
    return process(argv[1]);
}
