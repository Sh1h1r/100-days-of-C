#include<stdio.h>
#include<math.h> 
int main(){
	float p,r,t,si,ci;
	printf("enter princial amount:");
	scanf("%f",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter the time in year:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	ci=p*pow((1 + r/100),t);
	printf("simple interst=Rs. %f\n",si);
	printf("compound interst= Rs. %f\n",ci);
	return 0;
}
