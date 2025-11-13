#include <stdio.h>
#define length 5
int main(){
	int arr[length] = {1 ,2 ,3 ,4 ,5};
	int arr2[length];
	for(int i = 0; i < 5; i++){
		arr2[i] = arr[length - 1 - i];	
	}
	printf("the reversed array is:\n");
	for(int i = 0; i < 5; i++){
		printf("%d\n",arr2[i]);
	}
	return 0;
}
