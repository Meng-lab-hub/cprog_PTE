#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "file.h"


#define FILE_MODE "r"
#define BUFFER_SIZE 1024

#define MALLOC(size,ptr) \
    do{    \
        ptr=malloc(size);\
        if(!ptr)        \
            abort();    \
    }while(0)

#define FREE(ptr)\
     do{       \
     free(ptr);\
     ptr=NULL; \
}while(0)


int file(const char *filename){
#ifdef DEBUG
    printf("Enter file filename is %s\n", filename);
#endif // DEBUG
if(!filename)
    return EXIT_FAILURE;




    FILE *f=fopen(filename, FILE_MODE);
    if(!f){
        printf(strerror(errno));
        return EXIT_FAILURE;



    }

   char *buffer=NULL;
    MALLOC(BUFFER_SIZE,buffer);

    while(fgets(buffer, BUFFER_SIZE, f))
        fputs(buffer, stdout);

      fclose(f);
      FREE(buffer);
      return EXIT_FAILURE;


}
