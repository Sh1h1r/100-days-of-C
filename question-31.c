#include <stdio.h>

int main (){
	int number,arr[32] = {},i = 0;
	printf("enter a number:");
	scanf("%d",&number);
	while (number){
		int binary_number = number % 2;
		arr[i] = binary_number;
		number = number / 2;
		i++;
	}
	int reverse = i - 1;
	while(reverse >= 0){
		printf("%d",arr[reverse]);
		reverse--;
	}
	return 0;
}
