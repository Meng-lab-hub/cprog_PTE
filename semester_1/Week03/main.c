#include <stdio.h>
#include <stdlib.h>

#define LOWER 10.0
#define HIGHER 100.0
#define STEP 10.0
#define DEVIDER 5.0/9.0
#define MAGIC 32.0

void fahr()
{
    for(int fahrenheit=LOWER;fahrenheit<=HIGHER;fahrenheit += STEP)
        printf("%3d fahrenheit is %6.2f celcius.\n",fahrenheit,DEVIDER+(fahrenheit-MAGIC));
}


void fahr2()
{
    int fahr;
    printf("fahrenheit:");
    scanf("%d",&fahr);
    printf("%d fahrenheit is %f celcius.\n",fahr,DEVIDER+(fahr-MAGIC));
}



int main()
{
    printf("Fahrenheit - Celcius converter\n");
    fahr();
    return 0;
}
