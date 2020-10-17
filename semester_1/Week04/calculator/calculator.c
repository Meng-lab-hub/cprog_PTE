#include <stdio.h>
#include <stdlib.h>

#include "calculator.h"

#define MAX_OP 20
#define NUMBER '0'
#define TOO_LARGE '9'
#define STACK_DEPTH 50

int sp = 0;
double stack[STACK_DEPTH];


char getop(char s[], int limit) {
    int i,c;
    while( (c=getchar()) == ' ' || c == '\t' || c=='\n'  )
        ;

    if (c != '.' && (c<'0' || c>'9'))
        return c;

    s[0]=c;
    for(i=1; (c=getchar()) >='0' && c<='9'; ++i)
        if (i<limit)
            s[i]=c;

    if (c=='.') {
        if (i<limit)
            s[i]=c;

        for(i++; (c=getchar()) >='0' && c<='9'; ++i)
            if (i<limit)
                s[i]=c;
    }

    if (i<limit) {
        ungetc(c, stdin);
        s[i]='\0';
        return NUMBER;
    }

    while( c!='\n' && c!=EOF)
        c=getchar();

    s[limit-1]='\0';
    return TOO_LARGE;
}

void clear() {
    sp=0;
}


double pop() {
    if (sp>0)
        return  stack[--sp];
    else {
        printf("Stack is empty!\n");
        clear();
        return 0.0f;
    }
}

double push(double val) {
    if (sp<STACK_DEPTH)
        return stack[sp++]=val;
    else {
        printf("Srack overflow!\n");
        clear();
        return 0.0f;
    }

}

void calculator() {
    char s[MAX_OP];
    char type;
    double op2;
    while( (type = getop(s,MAX_OP)) != EOF ) {
       switch(type){
        case NUMBER : push(atof(s));
            break;
        case '+' : push(pop() + pop());
            break;
        case '*' : push(pop() * pop());
            break;
        case '-' :
            op2 = pop();
            push(pop()- op2);
            break;
        case '/' :
            op2 = pop();
            if (op2 != 0.0)
                push(pop()/op2);
            else
                printf("Divider is zero!\n\n");
            break;

        case '=' :
            printf("\t %f\n", push(pop()));
        case 'c' :  clear();
            break;



        case 'q' : return;

        case TOO_LARGE:
            printf("%s is too large!\n",s);
            break;

        default:
            printf("Unknown command:%d\n", type);

       }
    }
}
