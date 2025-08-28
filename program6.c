#include<stdio.h>
int main(){
	int x,y,z;
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("x is:%d,y is:%d",x,y);
	return 0;
}
