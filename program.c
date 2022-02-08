#include<stdio.h>
#include<stdlib.h>

/*
A program in C, which reads an array of type int A with K columns and K rows.
Count the positive elements lying above the main diagonal (including the diagonal). 
*/

int main(int argc, char **argv){
	int k,w,i,j,z;
	printf("Enter the number of columns / rows:\n");
	scanf("%d",&k);
	int A[k][k];
	int sum;
for(i=0;i<k;i++){
	printf("Enter a value for %d column separated by a space:\n",i+1);
	for(j=0;j<k;j++){
		scanf("%d",&A[j][i]);
	}
	}	
	printf("A loaded matrix: \n\n");
for(i=0;i<k;i++){
	for(j=0;j<k;j++){
		printf("%d ",A[i][j]);
	}
	printf("\n");
	}	
	for(i=0;i<k;i++){
	for(j=i;j<k;j++){
		if(A[i][j]>0)
		sum+=A[i][j];
	}
	}
	printf("\nThe sum of the positive matrix elements lying above the main diagonal together with the diagonal: ");
		printf("%d",sum);
	
}
  
