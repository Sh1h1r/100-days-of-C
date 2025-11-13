#include <stdio.h>
int main(){
	int number,i = 0,number_;
	printf("enter a number:");
	scanf("%d",&number);
	number_ = number;
	while(number_ != 0){
		i++;
		number_ = number_ / 10;
	}
	
	int frequency[10]= {0};
	number_ = number;
	for(int e = 0; e < i; e++){
		int digit = number  % 10;
		frequency[digit]++;
		number = number / 10;
	}
	int max_frequency = frequency[0];
	int max = 0;
	for(int j = 0; j < i; j++){
		if ( max_frequency < frequency[j]){
			max_frequency = frequency[j];
			max = j;
		}
	}
	printf("%d has most occurence\n",max);
	return 0;
}
