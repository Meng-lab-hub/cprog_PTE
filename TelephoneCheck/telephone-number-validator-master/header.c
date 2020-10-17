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
    if(slashCounter != 1) return 5;
    return EXIT_SUCCESS;
}

int process(char *argument) {
    if(!argument) return EXIT_FAILURE;
    char *countryOfNumber;
    printf("%s\n",argument);
    switch(validityChecker((argument))){
    case 0:
        printf("Valid telephone number\n");
        if((countryOfNumber=numberCountryChecker(argument))!=NULL) printf("Country of telephone number: %s \n",countryOfNumber);
        else printf("Country not found");
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

/*Country of a telephone number can be found using the first four digits.
This function helps us to get the first N digits of a number*/
char* getFirstN(char *argument, int n){
   if(!argument) return EXIT_FAILURE;
   int i=0, nCount=0;
   char c;
   char *temp=malloc(sizeof(char)*(n+1));
   if(!temp) return EXIT_FAILURE;
   temp[n]='\0';
   while((c=argument[i])!=NULL){
    if(n==nCount) break;
    if((int)c<='9' && (int)c>='0'){
        temp[nCount++]=argument[i];
    }
    i++;
   }
    return temp;
}

/*In this function we are searching for the countryCode1/2 from the given file*/
char *fileReader(char *fileName, int countryCode1, int countryCode2) {
    if(!fileName) return EXIT_FAILURE;
    char *countryName=malloc(sizeof(char)*50);
    int countryNumber;
    char line[50];
        FILE *file = fopen(fileName,"r");
        while(fgets(line,50,file)!=NULL){
            countryNumber=atoi(strtok(line,",\n"));
            strcpy(countryName,strtok(NULL,",\n"));
            if(countryNumber==countryCode1 || countryNumber==countryCode2) {
                fclose(file);
                return countryName;
            }
        }
    return NULL;
}
/*To make searching process fast and tidy, I divided all the country codes into 9 different files
according to their first digit*/
char* numberCountryChecker(char *argument) {
    if(!argument) return EXIT_FAILURE;
    int firstCharInt=atoi(getFirstN(argument,1));
    int first4=atoi(getFirstN(argument,4));
    int first3=atoi(getFirstN(argument,3));
    int first2=atoi(getFirstN(argument,2));
    int first1=atoi(getFirstN(argument,1));

    if(firstCharInt==1) return fileReader("data/1.txt", first1, first4);
    if(firstCharInt==2) return fileReader("data/2.txt", first2, first3);
    if(firstCharInt==3) return fileReader("data/3.txt", first2, first3);
    if(firstCharInt==4) return fileReader("data/4.txt", first2, first3);
    if(firstCharInt==5) return fileReader("data/5.txt", first2, first3);
    if(firstCharInt==6) return fileReader("data/6.txt", first2, first3);
    if(firstCharInt==7) return fileReader("data/7.txt", first1, first1);
    if(firstCharInt==8) return fileReader("data/8.txt", first3, first3);
    if(firstCharInt==9) return fileReader("data/9.txt", first2, first3);

    return NULL;
}
