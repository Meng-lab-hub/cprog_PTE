#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void help(char *prg)
{
    printf("Usage : %s <str>\n",prg);
}


int process(int argc, char *argv[])
{
    int l = strlen1(argv[1]);
    char *to = malloc(l+1);
    if(!to)
        abort();

    strcpy1(to, argv[1]);
    printf("copy of %s is %s\n", argv[1], to);
    free(to);
    assert(strlen1(NULL)==0);
    assert(strcpy1(NULL,NULL)==NULL);

}
int main(int argc, char *argv[])
{
    if(argc==1)
    {
        help(argv[0]);
        return EXIT_FAILURE;
    }

    return process(argc, argv);
}
