#include<stdio.h>
int main(){
	int i,n,product;
	product=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n; i++){
		if(i%2==0){
			product=product*i;
		}
	}
	printf("%d\n",product);
	return 0;
}
