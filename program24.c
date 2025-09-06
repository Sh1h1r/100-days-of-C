#include<stdio.h>
int main(){
	int unit,bill;
	printf("enter number of units:");
	scanf("%d",&unit);
	if(unit<=100){
		bill=5*unit;
		printf("the bill is:%d\n",bill);
	}
	else if(unit<=200 && unit>100){
		unit=unit-100;
		bill=5*100 + unit*7;
		printf("the bill is:%d\n",bill);
	}
	else if(unit>200 && unit<=300){
		unit=unit-200;
		bill=  5*100+7*100 + unit*10;
		printf("the bill is:%d\n",bill);
	}
	else{
		unit=unit-300;
		bill=5*100+7*100+10*100+unit*12;
		printf("the bill is:%d\n",bill);
	}
	return 0;
}
