#include<stdio.h>
int main(){
    float marks;
    printf("enter marks:");
    scanf("%f",&marks);
    if (marks>=90 && marks<=100){
    	printf("A");
    }
    else if(marks<90 && marks>=80){
    	printf("B");
    }
    else if(marks<80 && marks>=70){
    	printf("C");
    }
    else if(marks<70 && marks>=60){
    	printf("D");
    }
    else{
    	printf("fail");
    }
	return 0;
	
}
