#include <stdio.h>
int main(){
	int length;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length + 1];
	for(int i = 0; i < length; i++){
		printf("enter the %d element:",i + 1);
		scanf("%d",&arr[i]);
	}
	int position,element;
	printf("enter position:");
	scanf("%d\n", &position);
	printf("enter element:");
	scanf("%d\n", &element);
	for(int i = length; i > position - 1; i-- ){
		arr[i] = arr[i- 1];
	}
	arr[position - 1] = element;
	printf("Array after insertion:");
    for (int i = 0; i < length + 1; i++) {
        printf("%d ", arr[i]);
    }

	return 0;
}
