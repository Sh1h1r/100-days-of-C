#include <stdio.h>
int main(){
	int arr[10] = {1,3,4,6,9,8,4,1,4,7};
	for(int i = 0; i < 10; i++){
		for(int j = i + 1; j < 10; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }

// searching with bubble sort
	printf("\n");
	int mid = 10 / 2,search;
	int found = 0;
	printf("enter number to search:");
	scanf("%d",&search);
	if(search > arr[mid - 1]){
		for(int i = mid; i < 10; i++){
			if(search == arr[i]){
				found = 1;
				break;
			}
		}	
	}
	else{
		for(int i = 0; i < mid; i++){
			if(search == arr[i]){
				found  = 1;
				break;
			}
		}
	}
	if(found == 1){
		printf("found!\n");
	}
	else{
		printf("not found!\n");
	}
	return 0;
}
