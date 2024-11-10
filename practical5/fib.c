#include <stdio.h>
#include <stdlib.h>


void fib(int *a, int *b);                 //using pointers to change value of intergers at any time letter 

int main(void)
{
  int n;
  printf("Here, input a positive integer n\n");
  scanf("%d", &n);
  if (n<1)
  {
     printf("n must be greater than 1\n");
     exit(1);

  
  }
   int f0 =0;
   int f1 =1;
   printf("the fib series is :\n");
   printf("%d, %d ", f0, f1);


   int i;
   for (i=2; i <= n; i++)
   {
         fib(&f1, &f0);
	 printf("%d",f1);
                    	 if (( i + 1) % 10 == 0)                      //this is only for line break after every 10 numbers
	                  {
                  		 printf(" \n ");
	                      }

   }



    return 0;

}

void fib(int *a, int *b)                   //defining fibonacci function with two arguments. 
{
 int next;
 next = *a + *b;

 *b = *a;
 *a=next;

}
