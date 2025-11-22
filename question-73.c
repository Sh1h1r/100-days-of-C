#include <stdio.h>
int main(){
	int arr[3][3],sum,sum_row[2];
	for(int row = 0; row < 2; row++){
		for(int col = 0; col < 2; col++){
			printf("enter the elemet %d %d:",row , col);
			scanf("%d",&arr[row][col]);
		}
	}
	for(int row = 0; row < 2; row++){
		sum_row[row] = 0;
		for(int col = 0; col < 2; col++){
			sum_row[row] = sum + arr[row][col];
		}
	}

	printf("sum of each row:\n");
    for(int i = 0; i < 3; i++) {
        printf("row %d sum = %d\n", i + 1, sum_row[i]);
    }
	return 0;
}
