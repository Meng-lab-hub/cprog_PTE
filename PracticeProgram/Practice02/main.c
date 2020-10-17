#include <stdio.h>
#include <stdlib.h>


int sum_odd() {
    int number[5],j,i,total=0;
    for(i=1;i<=5;i++)
    {
    printf("Input number %d:",i);
    scanf("%d",&number[i]);
    }
	for(j = 1; j <= 5; j++)
        {
		if((number[j]%2) != 0)
            {
            total += number[j];
            }
        }
        printf("Sum of all odd values: %d\n",total);

	return 0;
}

//------------------------------------------------------------------------


int make_triangle()
{
    float integer[3];
    int i;
    char *str[3];
    str[0]="1st";
    str[1]="2st";
    str[2]="3st";

    for(i=0; i<3; i++)
    {
    printf("Input %s integer:",str[i]);
    scanf("%f",&integer[i]);
    }

    if(integer[0]<(integer[1]+integer[2]) && integer[1]<(integer[0]+integer[2]) && integer[2]<(integer[0]+integer[1]))
    {
        printf("The perimeter of the triangle is: %.1f\n",integer[0]+integer[1]+integer[2]);
    }
    else
    {
        printf("It's not possible to make a triangle\n");

    }
    return 0;
}


//------------------------------------------------------------------------


int check_multiply()
{
    int i,number[2];
    char *str[2];
    str[0]="1st";
    str[1]="2nd";

    for(i=0;i<2;i++)
    {
    printf("Input the %s number:",str[i]);
    scanf("%d",&number[i]);
    }
    if((number[0]%number[1]) == 0 || (number[1]%number[0] == 0))
    {
        printf("multiplied!");
    }
    else
    {
        printf("Those numbers aren't multiplied.\n");
    }
    return 0;
}

//------------------------------------------------------------------------


int read_print_month()
// This is work but shouldn't be used
{
    int month;
    printf("Input a number between 1 to 12 to get the month >> ");
    scanf("%d",&month);
    if(month == 1)
    {
        printf("January");
    }
    else if(month == 2)
    {
        printf("February");
    }
    else if(month == 3)
    {
        printf("March");
    }
    else if(month == 4)
    {
        printf("April");
    }
    else if(month == 5)
    {
        printf("May");
    }
    else if(month == 6)
    {
        printf("June");
    }
    else if(month == 7)
    {
        printf("July");
    }
    else if(month == 8)
    {
        printf("August");
    }
    else if(month == 9)
    {
        printf("September");
    }
    else if(month == 10)
    {
        printf("October");
    }
    else if(month == 11)
    {
        printf("November");
    }
    else if(month == 12)
    {
        printf("December");
    }
    else
    {
        printf("No month detected!");
    }
    return 0;
}



int read_print_month2() // This is the real one
{
    int month;
    printf("Input a number between 1 to 12 to get the month:");
    scanf("%d",&month);
    switch(month)
    {
        case 1 : printf("January");
        break;
        case 2 : printf("February");
        break;
        case 3 : printf("March");
        break;
        case 4 : printf("April");
        break;
        case 5 : printf("May");
        break;
        case 6 : printf("June");
        break;
        case 7 : printf("July");
        break;
        case 8 : printf("August");
        break;
        case 9 : printf("September");
        break;
        case 10 : printf("October");
        break;
        case 11 : printf("November");
        break;
        case 12 : printf("December");
        break;
        default: printf("Incorrect Number!");
        break;
    }
    return 0;
}




int read_print_month3()   //this is the perfect one
{
    int x;
    char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Input a number between 1 to 12 to get the month:");
    scanf("%d",&x);
    printf("%s",month[x-1]);
    return 0;
}


//------------------------------------------------------------------------


int even_number()
{
    int x;
    for(x=1;x<=25;x++)
    {
        printf("%d ",2*x);  // can use if x%2 == 0 as well
    }                          // can apply array a[50], a[i]=i
    return 0;
}





//------------------------------------------------------------------------


int count_number()
{
    int x,value[5],positive=0,negative=0;
    char *number[5];
    number[0] = "first";
    number[1] = "second";
    number[2] = "third";
    number[3] = "fourth";
    number[4] = "fifth";
    for(x=0;x<5;x++)
    {
        printf("Input the %s number:",number[x]);
        scanf("%d",&value[x]);
    if(value[x]>=0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    }
    printf("Number of positive numbers:%d\n",positive);
    printf("number of negative numbers:%d\n",negative);
    return 0;

}



//------------------------------------------------------------------------


int count_average()
{
    float value[5],aver=0;
    int x,count1=0;
    char *number[5]={"1st","2nd","3rd","4th","5th"};
    for(x=0;x<5;x++)
    {
        printf("Input the %s number:",number[x]);
        scanf("%f",&value[x]);
        if(value[x]>=0)
        {
            count1++;
            aver += value[x];
        }
    }
    printf("Number of positive numbers: %d\n",count1);
    printf("Average value of the said positive numbers: %.2f\n",aver/count1);
    return 0;
}


//------------------------------------------------------------------------


int sum_odd2()
{
    int x,value[5],sum=0;
    char *number[5]={"1st","2nd","3rd","4th","5th"};
    for(x=0;x<5;x++)
    {
        printf("Input the %s number:",number[x]);
        scanf("%d",&value[x]);
        if(value[x]%2 != 0)
        {
            sum += value[x];
        }
    }
    printf("Sum of all odd values: %d\n",sum);
    return 0;
}


//------------------------------------------------------------------------



int square()
{
    int x,MAX;

    printf("Input the amount of result number:");
    scanf("%d",&MAX);
    for(x=1;x<=MAX;x++)
    {
        printf("%d^2 = %d\n",2*x,(2*x)*(2*x));
    }
    return 0;
}



//------------------------------------------------------------------------





int master_check()
{
    int number;
    printf("Input an integer:");
    scanf("%d",&number);
    if((number>0) && (number%2 == 0))
    {
        printf("Positive Even\n");
    }
    else if((number<0) && (number%2 == 0))
    {
        printf("Negative Even\n");
    }
    else if((number>0) && (number%2 != 0))
    {
        printf("Positive Odd\n");
    }
    else if((number<0) && (number%2 != 0))
    {
        printf("Negative Odd\n");
    }
    return 0;
}



//--------------------------------------------------------------------------------------------------



int remain3()
{
    int number,output;
    printf("Input an integer");
    scanf("%d",&number);
    for(output=1;output<=100;output++)
    {
        if(output%number==3)
        {
        printf("%d\n",output);
        }
    }
    return 0;
}




//--------------------------------------------------------------------------------------------------

#define MAX 5

int highest_position()
{
    int x,y,maxi=0,number[MAX],position;
    printf("Input 5 integers:\n");
    for(x=0;x<MAX;x++)
    {
    scanf("%d",&number[x]);
    }
    for(y=0;y<MAX;y++)
    {
        if(number[y]>maxi)
        {
            maxi=number[y];
            position=y;
        }
    }
    printf("Highest value: %d\nPosition: %d\n",maxi,position+1);
    return 0;
}


//--------------------------------------------------------------------------------------------------



int check_ascending()
{
    int x,value[2];
    char *number[2]={"1st","2nd"};
    printf("Input a pair of numbers(for example 10,2)\n");
    for(x=0;x<2;x++)
    {
    printf("Input the %s number:",number[x]);
    scanf("%d",&value[x]);
    }
    if(value[0]>value[1])
    {
        printf("The pair is in descending order!\n");
    }
    else if(value[1]>value[0])
    {
        printf("The pair is in ascending order!\n");
    }
    return 0;
}


//--------------------------------------------------------------------------------------------------




int pass_word()
{
    int password,x=1;
    while (x !=0)
    {
    printf("Input the password: ");
    scanf("%d",&password);
    if(password == 1234)
    {
        printf("Correct password\n");
        x=0;
    }
    else
    {
        printf("Incorrect password\nPlease try again\n");
    }
    }
    return 0;
}


//--------------------------------------------------------------------------------------------------



int coordinate()
{
    int xco,yco;
    printf("Input the Coordinate(x,y):\nx: ");
    scanf("%d",&xco);
    printf("y: ");
    scanf("%d",&yco);
    if(xco>0 && yco>0)
    {
        printf("Quadrant I(+,+)\n");
    }
    else if(xco<0 && yco>0)
    {
        printf("Quadrant II(-,+)\n");
    }
    else if(xco<0 && yco<0)
    {
        printf("Quadrant III(-,-)\n");
    }
    else
    {
        printf("Quadrant IV(+,-)\n");
    }
    return 0;
}


//--------------------------------------------------------------------------------------------------




int division()
{
    int first,second;
    float result;
    printf("Input two numbers:\nx:");
    scanf("%d",&first);
    printf("y:");
    scanf("%d",&second);
    if(second != 0)
    {
        result=first/second;
        printf("%2.1f",result);
    }
    else
    {
        printf("Division not possible.");
    }
    return 0;
}




//--------------------------------------------------------------------------------------------------



int not_divisable_17()
{
    int x,y,value[2],total=0,temp;
    char *number[2]={"first","second"};
    for(x=0;x<2;x++)
    {
        printf("Input the %s integer:",number[x]);
        scanf("%d",&value[x]);
    }
    if(value[0]>value[1])
    {
        temp = value[1];
        value[1] = value[0];
        value[0] = temp;
    }
    for(y = value[0];y<= value[1];y++)
    {
        if(y%17 != 0)
        {
            total += y;
        }
    }
    printf("Sum: %d\n",total);
    return 0;
}


//--------------------------------------------------------------------------------------------------



int dividing_2_3()
{
    int x,value[2],temp,y;
    char *number[2]={"first","second"};

    for(x=0;x<2;x++)
    {
    printf("Input the %s number:",number[x]);
    scanf("%d",&value[x]);
    }

    if(value[0]>value[1])
    {
        temp=value[1];
        value[1]=value[0];
        value[0]=temp;
    }

    for(y=value[0];y<value[1];y++)
    {
        if(y%7 == 2 || y%7 == 3)
        {
            printf("%d\n",y);
        }
    }
    return 0;
}

//--------------------------------------------------------------------------------------------------



int three_number_in_a_line()
{
    int line;
    char array[3];
    printf("Input number of lines:");
    scanf("%d",&line);
    printf("a");
}
























int main()
{
    printf("\n\n\n");
    not_divisable_17();
    return 0;
}


