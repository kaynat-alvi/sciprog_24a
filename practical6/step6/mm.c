//this is practical 6
//

void matmult(int n, int p, int q, double A[n][p], double B[q][p], double C[n][q]){
// performinf matrix multiplication
    int i, j, k;    

    for (i=0; i<n; i++)
        for (j=0; j<q; j++)
            for (k=0; k<= p-1; k++)
	          C[i][j] = C[i][j]  + A[i][k] * B[k][j];
}
