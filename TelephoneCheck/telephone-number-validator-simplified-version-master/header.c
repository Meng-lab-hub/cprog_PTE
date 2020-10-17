#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "header.h"

int validityChecker(char *argument) {
    if(!argument) return EXIT_FAILURE;
    int c;
    int i, openBracketCount=0, closeBracketCount=0, specialCharacters=0, slashCounter=0;
    for(i=0; (c=argument[i])!='\0'; i++){
        if(c=='/') {specialCharacters++; slashCounter++; continue;}
        if(c=='-') {specialCharacters++; continue;}
        if(c==' ') {specialCharacters++; continue;}
        if(c=='(') {specialCharacters++; openBracketCount++; continue;}
        if(c==')') {specialCharacters++; closeBracketCount++; continue;}
        if(c<'0' || c>'9'){
            if(c=='+') {
                if(i==0) continue;
                else return 2;
            }
            return 1;
        }
    }
    if(openBracketCount!=closeBracketCount) return 3;
    if((i-specialCharacters)<7 || (i-specialCharacters)>15) return 4; //Min. number of digits is 7 and max is 15
    if(slashCounter > 1) return 5;
    return EXIT_SUCCESS;
}

int process(char *argument) {
    if(!argument) return EXIT_FAILURE;
    printf("%s\n",argument);
    switch(validityChecker((argument))){
    case EXIT_SUCCESS:
        printf("Valid telephone number\n");
        break;
    case 1:
        printf("Syntax error: Please enter digits\n");
        break;
    case 2:
        printf("Syntax error: fix your '+' related issues\n");
        break;
    case 3:
        printf("Syntax error: fix your '(' and ')' related issues\n");
        break;
    case 4:
        printf("Syntax error: Please note that max/min length of a telephone number is 15/7\n");
        break;
    case 5:
        printf("Only one slash is allowed\n");
        break;
    default:
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
