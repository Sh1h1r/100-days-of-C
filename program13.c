#include<stdio.h>
int main(){
	int year;
	printf("enter an year:");
	scanf("%d",&year);
	if (year%400==0){
		printf("the year is a leap year\n");
	}
	else if(year%4==0){
		if(year%100==0){
			printf("the year is not a leap year\n");
		}
		else{
			printf("the year is a leap year\n");
		}
	}
	else{
		printf("the year is not a leap year\n");
	}
	return 0;
}
