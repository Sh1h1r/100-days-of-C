#include<stdio.h>
int main(){
	char op;
	int num1;
	int num2;
	float s;
	printf("enter number 1:");
	scanf("%d",&num1);
	printf("enter number 2:");
	scanf("%d",&num2);
	printf("enter operation to perform:");
	scanf(" %c",&op);
	if (op=='+'){
		s=num1+num2;
		printf("the output is:%f\n",s);
	}
	else if(op=='-'){
		s=num1-num2;
		if (s<0){
			s=s* -1;
			printf("the output is:%f\n",s);
		}
		else{
			printf("the output is:%f\n",s);
		}
	}
	else if(op=='*'){
		s=num1*num2;
		printf("the output is:%f\n",s);
	}
	else if(op=='/'){
		s=num1/num2;
		if (num2==0){
			printf("the operation is not possible:\n");
		}
		else{
			printf("the output is:%f\n",s);
		}
	}
	else if(op=='%'){
		s=num1%num2;
		printf("the output is:%f\n",s);
	}
	else{
		printf("invalid operation\n");
	}
	return 0;	
}
