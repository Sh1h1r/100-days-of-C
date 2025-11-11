#include <stdio.h>
int main(){
	int n,max,min;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for(int element = 0; element < n; element++){
		printf("enter the %d element: ", element + 1);
		scanf("%d", &arr[element]);
	}
	min = arr[0];
	max = arr[0];
	for( int i = 0; i < n; i++){
		if( min > arr[i] ){
			min = arr[i];
		}
		else if( max < arr[i] ){
			max = arr[i];
		}
	}
	printf("the minimum value is: %d\n", min);
	printf("the maximum value is: %d\n", max);
	return 0;
}
