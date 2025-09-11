#include<stdio.h>
int main(){
	int n,i,fact;
	fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	if(n==0){
		printf("the factorial is 1\n");
	}
	else{
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		printf("the factorial is %d\n",fact);
	}
	return 0;
}
