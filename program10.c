#include<stdio.h>
int main(){
	float s,mi,ho;
	printf("enter time in seconds:");
	scanf("%f",&s);
	mi=s/60;
	ho=mi/60;
	printf("the time in minutes is:%f\n",mi);
	printf("the time in hours is:%f\n",ho);
	return 0;
}
