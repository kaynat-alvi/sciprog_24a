//this will be my C code file of practical4, which is an extension of practical3.
//first include the necessery libraries


#include <stdio.h>                   //library to printf
#include <math.h>                    // library to numeric calculations
#define N 12                        // defining N as global variable

float TanArr[N+1];                   // making TanArr as gloabl variable

float degtorad(float degarg);          //defining a float to convert degree to rad
float traprule();

int main()
{ 
       int i;                                                //integer       
       float a = 0.0, b_deg = 60.0;                           // float variables in degrees
       float deg;

   //calculate the area at pts x1, x2, ....x11 and add them all                      
       for (i = 0; i < N;  i++)  
       {
                 deg= i*5.0;
		 TanArr[i] = tan(degtorad(deg));          // ((M_PI * deg) /180);
		 printf("TanArr[%d] = %f\n", i , TanArr[i]);
	       
       }


       float area = traprule();

       //approximated result
       printf("\nTrapezoidal result is: %f\n", area);
       //actual result
       //integral of tan is ln(2)
       printf("real result is: %f\n", log(2.0));

       return 0;
       }

float degtorad( float degarg){
	float pi = 3.1415927;
	return ((pi*degarg)/180.0);
}

float traprule(){
	float area;
	int i;
       //sum tan(a)+tan(b) where a and b are in radians
       area = TanArr[0] + TanArr[N];
       printf("\n Intital area (sum at x(0) and x(12) )=  %f\n", area);

       for (i =1; i<N; i++){
       area =area+2*TanArr[i];
       }

       printf("The value of the sum after the loop is : %f\n", area);

       //Muliply area by (pi/3)/2(12) after converting it to radians
       float mult_rad =degtorad((60.0 - 0.0 )/(2*N));              //(M_PI *((b_deg-a)/(2*N)))/180.0;
       area = mult_rad*area;

return area;

}
