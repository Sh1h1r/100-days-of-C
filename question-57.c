#include <stdio.h>
int main(){
	int n, sum = 0;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for( int element = 0; element < n; element++){
		printf("enter the %d element: ", element + 1);
		scanf("%d",&arr[element]);
		sum = sum + arr[element];
	}
	printf("the sum is:%d\n", sum);
}
