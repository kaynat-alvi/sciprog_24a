//this is practical 8
/*
*iterative and recursive appraches to Euclid's algorithm to calculate the gcd of two positive integers
 * */
#include <stdio.h>
int iterativeGCD(int a, int b){
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int recursiveGCD(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return(recursiveGCD(b, a%b));
	}

}

int main(){

	int a, b, error;

	printf("Please enter two positive numbers:\n");
	error = scanf("%d %d", &a, &b);
	if (error != 2){
		printf("please enter two integer!\n");
		return 1;
		}
	if (a<=0 || b<=0){
		printf(" pelase enter positive integers!\n");
		return 1;
	}


printf("interativeGCD (%d, %d)=%d\n", a, b, iterativeGCD(a,b));
printf("recursiveGCD (%d, %d)= %d\n", a, b, recursiveGCD(a,b));

}

