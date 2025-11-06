#include<stdio.h>
int main(){
	char character;
	printf("enter a character:");
	scanf("%c",&character);
	if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
		printf("the character is a vowel\n");
	}
	else if(character=='A'|| character=='E' || character=='I' || character=='O' || character=='U'){
		printf("the character is a vowel\n");
	}
	else{
		printf("the character is not vowel\n");
	}
	return 0;
}


