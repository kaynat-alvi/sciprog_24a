#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int x);

int main (void)
{
        int i, order;
	double  e, *terms;


	printf(" please enter the order you wish to use \n");
	if (scanf("%d", &order)    !=1 )
	{
		printf("did not enter a number\n");
		return 1;
	}


	//printf("5! is %d\n", factorial(5));
 
       terms = (double *)malloc(order * sizeof(double));
       
       for (i =0; i< order; i++)
       {
	       terms[i]= 1.0 / (double)factorial(i+1);
	       printf("%.16lf\n", terms[i]);
       }

       e = 1.0;
       for (i =0; i< order; i++)
       {
	       e = e + terms[i];
       }

       printf( " e is estimated as %.10lf, with difference %e\n", e, e - exp(1.0));


       free(terms);
       return 0;
}

int factorial(int x){
	if (x<0){
		printf("the value should always be positive \n");
		return (-1);
	}

	else if (x ==0){

		return (1);
	}

	else {
		return (x * factorial(x-1));
	}
}
