#include<stdio.h>
int main(){
	int day,fine;
	printf("enter number of delay days:");
	scanf("%d",&day);
	if(day<=5){
		fine=2*day;
		printf("your fine is %d",fine);
	}
	else if(day>5 && day<=10){
		day=day-5;
		fine=2*5 + 4*day;
		printf("your fine is %d\n",fine);
	}
	else if(day<=30){
		day=day-10;
		fine=2*5 + 4*5 + 6*day;
		printf("your fine is %d\n",fine);
	}
	else if(day>30){
		printf("membership is cancelled\n");
	}
	return 0;
}
