#include <stdio.h>
int main(){
	int arr[2][2],sum = 0;
	for(int row = 0; row < 2; row++){
		for(int col = 0; col < 2; col++){
			printf("enter the elemet %d %d:",row , col);
			scanf("%d",&arr[row][col]);
		}
	}
	for(int row = 0; row < 2; row++){
		for(int col = 0; col <2; col++){
			sum += arr[row][col];
		}
	}
	printf("the sum of element of a array is: %d\n",sum);
}
