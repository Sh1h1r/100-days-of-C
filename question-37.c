#include <stdio.h>
int main(){
	int number1, number2, multiple;
	printf("enter number 1 :");
	scanf("%d", &number1);
	printf("enter number 2 :");
	scanf("%d", &number2);
	multiple = number1 * number2;
	for(int i = number1; i <= multiple; i = i + number1){
		for(int j = number2; j <= multiple; j = j + number2){
			if( i == j ){
				printf("the lcm is %d\n", i);
				break;
			}
		}
	}
	return 0;
}
