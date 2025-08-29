#include<stdio.h>
int main(){
	int s;
	int n;
	printf("enter n number of naturnal number:");
	scanf("%d",&n);
	s=0;
	for (int i=1; i<=n; i++){
		s = s+i;
	}
	printf("the sum is:%d\n",s);
}
