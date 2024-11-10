//this will be my C code file of practical3, which is on trapozidal rule.
//first include the necessery libraries


#include <stdio.h>                   //library to printf
#include <math.h>                    // library to numeric calculations

//define intergers to be used here,

int main(void)
{ 
       int N = 12;                                                         //integer       
       float a = 0;                                                       // float variables in degrees
       float b = 60;

       float b_rad;
       b_rad =(M_PI *b) / 180;                                             // conversion of float variable to radians


       float sum = tan(a) + tan(b_rad);
       printf(" The value of sum before the loop is: %f\n", sum);
                                           
       int i;
       for (i = 5; i < 60; i = i + 5)                                      // a loop to generate eleven points and formula for sum
       {
                   sum +=  2 * tan(i*M_PI/180); 
	       
       }
       printf("the value of sum after the loop is: %f\n", sum);

       sum = (( b_rad -a) / ( 2 * N )) * sum;
       printf("The final value of the sum is: %f\n", sum);
       printf("The actual value is: %f\n", logf(2));


       float abs_diff = fabs(sum - logf(2));                                //absolute difference 
       float rel_diff = fabs(1- (sum/logf(2)));                             // real difference 

       printf("abs_diff = %f\n rel_diff = %f\n", abs_diff, rel_diff);

	return 0;


}

