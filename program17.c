#include<stdio.h>
#include<math.h>
int main(){
	float root1,root2,disc,a,b,c,rPart;
	printf("enter the coefficents a,b and c:");
	scanf("%f,%f,%f",&a,&b,&c);
	disc=b*b -4*a*c;
	if(disc>0){
		printf("the roots are real and distinct");
		root1 = (-b + sqrt(disc)) / (2 * a);
		root2 = (-b - sqrt(disc)) / (2 * a);
		printf("roots are:%f,%f",root1,root2);
	}
	else if(disc==0){
		printf("the roots are real and equal");
		root1=root2=-b/(2*a);
		printf("roots are:%f",root1);
	}
	else{
		rPart = -b / (2 * a);
		printf("the real part is:%f",rPart);
		printf("the roots are imaginary");
	}
	return 0;
}
