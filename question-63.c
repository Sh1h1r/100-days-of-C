#include <stdio.h>
#define length 5
int main(){
	int arr[length] = {1 , 3, 8, 9, 10};
	int arr2[length] = {3 , 2, 5, 6, 7}; 
	int arr_merged[length + length];
	for(int i = 0; i < length; i++){
		arr_merged[i] = arr[i];
	}
	for(int j = 0; j < length; j++){
		arr_merged[length + j] = arr2[j];
	}
	for(int element = 0; element < length * 2; element++){
		printf("%d\n",arr_merged[element]);
	}
	return 0;
}
