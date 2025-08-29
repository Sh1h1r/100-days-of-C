#include<stdio.h>
int main(){
	int a,b;
	printf("enter num1:");
	scanf("%d",&a);
	printf("enter num2:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("num1:%d ,num2:%d\n",a,b);
}
