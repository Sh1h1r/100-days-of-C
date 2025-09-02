#include<stdio.h>
#include<ctype.h>
int main(){
	char character;
	printf("enter a character:");
	scanf("%c",&character);
	if(isupper(character)){
		printf("the character is an uppercase alphabet\n");
	}
	else if(islower(character)){
		printf("the character is a lowercase alphabet\n");
	}
	else if (isdigit(character)){
		printf("the character is a digit\n");
	}
	else{
		printf("it is a special character\n");
	}
	return 0;
}
