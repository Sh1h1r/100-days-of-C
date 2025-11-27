#include <stdio.h>
int main(){
	int rows,columns;
	printf("enter the number of rows and columns of a the matrix:");
	scanf("%d %d",&rows,&columns);
	int arr[rows][columns];
	if(rows == columns){
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				printf("enter the %d row and %d column:",i + 1, j + 1);
				scanf("%d",&arr[i][j]);
			}
		}

		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}

		int symmetric = 0; 
		
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				if(arr[i][j] == arr[j][i]){
					symmetric = 1;
				}
			}
		}

		if(symmetric) printf("the matrix is symmetric\n");
		if(!symmetric) printf("the matrix is not symmetric\n");
	}
	
	else printf("the array is not symmetric\n");
	return 0;
}
