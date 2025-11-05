#define ROWS 5
#include <stdio.h>
/*
1
12
123
1234
12345

row = 5
column = 1,2,3,4,5

*/
int main(){
	for(int row = 1; row <= ROWS; row++){
		for(int column = 1; column <= row; column++){
			printf("%d",column);
		}
		printf("\n");
	}
	return 0;
}
