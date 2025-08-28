#include<stdio.h>
int main(){
	float celcius;
	float farenheit;
	printf("enter temperature in celcius:");
	scanf("%f",&celcius);
	farenheit=(celcius*1.8)+32;
	printf("temperature in farenheit is:%f",farenheit);
	return 0;
}
