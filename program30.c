#include<stdio.h>
int main(){
	int n,fst,snd,trd;
	printf("enter a number:");
	scanf("%d",&n);
	fst=n%10;
	n=n/10;
	snd=n%10;
	n=n/10;
	trd=n%10;
	printf("the number reversed is %d%d%d\n",fst,snd,trd);
	return 0;
}
