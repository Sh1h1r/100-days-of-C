#include <stdio.h>
int main(){
	int length;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		printf("enter the %d element:",i + 1);
		scanf("%d",&arr[i]);
	}
	int largest = arr[0];
	for(int i = 0; i < length; i++){
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	int second_largest = arr[0];
	for(int j = 0; j < length; j++){
		if(arr[j] > second_largest && arr[j] != largest){
			second_largest = arr[j];
		}
	}
	printf("the second largest element is %d\n",second_largest);
	printf("the largest is %d\n",largest);
	return 0;	
}
