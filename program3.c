#include<stdio.h>
int main(){
	int length;
	int breadth;
	int perimeter;
	int area;
	printf("enter length of a rectangle:");
	scanf("%d",&length);
	printf("enter breadth of a rectangle:");
	scanf("%d",&breadth);
	perimeter=2*(length+breadth);
	area=length*breadth;
	printf("the area is:%d\n",area);
	printf("the perimeter is:%d\n",perimeter);
	return 0;
}
