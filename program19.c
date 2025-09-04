#include<stdio.h>
int main(){
	int l1,l2,l3;
	printf("enter the length 1,2,3 of the triangle:");
	scanf("%d %d %d",&l1,&l2,&l3);
	if(l1==l2 && l1==l3){
		printf("the triangle is an equilateral triangle");
	}
	else if(l1==l2 || l1==l3){
		printf("the triangle is an isosceles triangle");
	}
	else{
		printf("the traingle is scalene");
	}
	return 0;
	
}
