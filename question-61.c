#include <stdio.h>
int main(){
	int n;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for( int i = 0; i < n; i++){
		printf("enter the %d elements:",i + 1);
		scanf("%d",&arr[i]);
	}
	int element,flag = 0;
	printf("enter the element to search:");
	scanf("%d",&element);	
	for(int i = 0; i < n; i++){
		if(arr[i] == element){
			printf("element found!\n");
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("element not found\n");
	}
	return 0;
}
