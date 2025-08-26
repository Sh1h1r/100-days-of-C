#include<stdio.h>
int a,b;
int main(){
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);
	int c=a+b;
	int diff=a-b;
	int prod=a*b;
	float div;
	 if(b!=0){
		 div=a/b;
		}
			
	printf("the sum of a and b is %d\n",c);
	printf("the difference of a and b is %d\n",diff);
	printf("the product of a and b is %d\n",prod);
	printf("the qoutient of a and b is %f\n",div);
	return 0;
}
