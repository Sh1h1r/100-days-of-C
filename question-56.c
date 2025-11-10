#include <stdio.h>
int main (){
	int n;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for(int element = 0; element < n; element++){
		int j;
		printf("enter the %d element:\n", element + 1);
		scanf("%d",&j);
		arr[element] = j;
	}
	for( int i = 0 ; i <n; i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
