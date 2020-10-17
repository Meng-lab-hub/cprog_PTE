#include <stdio.h>
#include <stdlib.h>

swap(int *num1, int *num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void is_Prim(int testVariable){
	int   j;
		for(j=2; j<=testVariable; j++)
      {

         if(testVariable%j==0)
         {

            break;
         }
      }
      if(j==testVariable)
      printf("%d\t", testVariable);
  }

void prim_range(int num1, int num2){
	int i = 0;
	printf("Prime numbers from %d and %d are:\n", num1, num2);
	for (i = num1; i<=num2; i++){
		is_Prim(i);
	}

}
int main(int argc, char **argv)
{
  if (argc==1 || argc==2)
  {
     printf("PLEASE PROVIDE THE ARGUMENTS");
     return 0;
  }
 if (argc > 3)
 {
     printf("arguments more than required");
     return 0;
 }
   int num1=atoi(argv[1]);
   int num2=atoi(argv[2]);

	 if (num1<0)
    num1=num1*(-1);
 	if (num2<0)
    num2=num2*(-1);
    if (num1 > num2){
    	swap(&num1,&num2);
	}
    prim_range(num1, num2);
  	return 0;
}
