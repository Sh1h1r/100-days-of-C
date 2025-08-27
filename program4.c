#include<stdio.h>
int main(){
	float pi;
	pi=3.14;
	int radius;
	int circumference;
	int area;
	printf("enter radius of a circle:");
	scanf("%d",&radius);
	circumference=2*pi*radius;
	area=pi*radius*radius;
	printf("the circumference of a circle is:%d\n",circumference);
	printf("the area of a circle is:%d",area);
	return 0;
}
