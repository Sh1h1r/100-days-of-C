#include<stdio.h>
int main(){
	int a;
	printf("enter an integer:");
	scanf("%d",&a);
	if(a<0){
		printf("the number is negative\n");
	}
	else if(a==0){
		printf("the number is 0\n");
	}
	else{
		printf("the number is positive\n");
	}
	return 0;
}
