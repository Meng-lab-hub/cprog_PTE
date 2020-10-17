#include <stdio.h>

#include "head1.h"

void three_num_line()
{
    int line,a,number=1,x=0;
    printf("Input number of lines: ");
    scanf("%d",&line);
    for(a=0;a<line;a++)
    {
        while(x<3)
        {
            printf("%d ",number++);
            x++;
        }
        x=0;
        printf("\n");
    }
}

//-----------------------------------------------------------------------------------------

void square_cube()
{
    int line,x,a=0,number=1;
    printf("Input number of lines: ");
    scanf("%d",&line);
    for(x=0;x<line;x++)
    {
        while(a<1)
        {
            printf("%d %d %d",number,number*number,number*number*number);
            number++;
            a++;
        }
        a=0;
        printf("\n");
    }

}


//-----------------------------------------------------------------------------------------


void p_line_q_number()
{
    int p,q,number=1,x,a=0;
    printf("Input number of lines: ");
    scanf("%d",&p);
    printf("Number of characters in a line: ");
    scanf("%d",&q);
    for(x=0;x<p;x++)
    {
        while(a<q)
        {
            printf("%3d ",number++);
            a++;
        }
        a=0;
        printf("\n");
    }
}


//-----------------------------------------------------------------------------------------




void mathematic()
{
    int a,n=0;
    float aver=0,marks[99];
    printf("Input Mathematics marks (0 to terminate):\n");
    for(a=1;a<100;a++)
    {
    scanf("%f",&marks[a]);
    if(marks[a] <= 0)
    {
        break;
    }
    aver += marks[a];
    n++;
    }
    printf("Average marks in Mathematics: %.2f\n",aver/n);
}


//-----------------------------------------------------------------------------------------



void value_S()
{
    int x;
    float S=0;
    for(x=1;x<=50;x++)
    {
    S += (float)1/x;
    }
    printf("Value of S: %.2f\n",S);
}


//-----------------------------------------------------------------------------------------



void calculate_S()
{
    double total=0,a,b=1;
    for(a=1;a<=7;a+=2)
    {
        total += (a/b);
        b=b*2;
    }
    printf("Value of series:%.2lf\n",total);
}


//-----------------------------------------------------------------------------------------


void divisor()
{
    int number,a;
    printf("Input an integer:");
    scanf("%d",&number);
    for(a=1;a<=number;a++)
    {
        if(number%a==0)
        {
            printf("%d\n",a);
        }
    }
}


//48-----------------------------------------------------------------------------------------


void seven_array()
{
    int value[5],i,j;
    printf("Input the 5 number of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&value[i]);
        if(value[i]<=0)
        {
        value[i]=100;
        }
    }

    for(j=0;j<5;j++)
    {
     printf("n[%d]=%d\n",j,value[j]);
    }
}


//49-----------------------------------------------------------------------------------------




void three_time_array()
{
    int value[5],i;
    printf("Input the first number of the array:");
    scanf("%d",&value[0]);
    for(i=0;i<5;i++)
    {
    printf("n[%d]= %d\n",i,value[i]);
    value[i+1]=value[i]*3;
    }
}



//50-----------------------------------------------------------------------------------------



void less_five()
{
    int i,j;
    float value[5];
    printf("Input the 5 members of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&value[i]);
    }
    for(j=0;j<5;j++)
    {
    if(value[j]<5)
    {
        printf("A[%d]= %.1f\n",j,value[j]);
    }
    }
}
