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
	int position;
	printf("enter position:");
	scanf("%d", &position);
	for(int i = position - 1; i < length; i++){
		arr[i] = arr[i + 1];
	}
	printf("Array after deletion:\n");
    for(int i = 0; i < length - 1; i++){
        printf("%d\n", arr[i]);
    }
	return 0;
}
