//this is practical 6
//
#include <stdio.h> 


int main(){
        int n =5;
	int p = 3;
	int q = 4;
	double A[n][p], B[p][q], C[n][q];	//static arrays 
        int i, j, k ;                           // indices

		//initalize A, B, C
        for (i=0; i<n; i++)
        for (j=0; j<p; j++)
		A[i][j] = i + j ;

        for (i=0; i<p; i++)
        for (j=0; j<q; j++)
                B[i][j] = i - j ;

        for (i=0; i<n; i++){
        for (j=0; j<q; j++){
                C[i][j] = 0.0 ;  
	}
	}

// performinf matrix multiplication
      for (i=0; i<n; i++)
        for (j=0; j<q; j++)
            for (k=0; k<= p-1; k++)
	          C[i][j] = C[i][j]  + A[i][k] * B[k][j];
         
//print matrices
printf("\n this is matrix A \n\n");
 for (i=0; i<n; i++){
        for (j=0; j<p; j++){
           printf( " %3.0f", A[i][j]);
	}
         printf(" \n");
 }



printf("\n this is matrix B \n\n");
 for (i=0; i<p; i++){
        for (j=0; j<q; j++){
           printf( " %3.0f", B[i][j]);
        }
         printf(" \n");
 }


printf("\n this is matrix C \n\n");
 for (i=0; i<n; i++){
        for (j=0; j<q; j++){
           printf( " %3.0f", C[i][j]);
        }
         printf(" \n");
 }




	return 0;
}
