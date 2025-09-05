#include<stdio.h>
int main(){
	int day;
	printf("enter the number corresponding to the month: ");
	scanf("%d",&day);
	switch(day){
		case 1:
			printf("the month is jan it has 31 days\n");
			break;
		case 2:
			printf("the month is february it has 28 days\n");
			break;
		case 3:
			printf("the month is march it has 31 days\n");
			break;
		case 4:
			printf("the month is april it has 30 days\n");
			break;
		case 5:
			printf("the month is may it has 31 days\n");
			break;
		case 6:
			printf("the month is june it has 30 say\n");
			break;
		case 7:
			printf("the month is july it has 31 days\n");
			break;	
		case 8:
			printf("the month august it has 31 days\n");
			break;
		case 9:
			printf("the month september it has 30 days\n");
			break;
		case 10:
			printf("the month october it has 31 days\n");
			break;
		case 11:
			printf("the month is november it has 30 days\n");
			break;
		case 12:
			printf("the month is december it has 31 days\n");
			break;
		default:
			printf("the case is invalid\n");	
			break;		
	}
	return 0;
}
