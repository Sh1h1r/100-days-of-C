#include <stdio.h>
int main(){
	int count_even = 0,count_odd = 0,n;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for(int element = 0; element < n; element++){
		printf("enter the %d element: ", element + 1);
		scanf("%d", &arr[element]);
	}
	for(int i = 0; i < n; i++){
		if( arr[i] % 2 == 0 ){
			count_even = count_even + 1;
		}
		else
			count_odd = count_odd + 1;
	}
	printf("the number of even elements are: %d\n", count_even);
	printf("the number of odd elements are:%d\n", count_odd);
	return 0;
}
