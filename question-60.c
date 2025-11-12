#include <stdio.h>
int main(){
	int count_positives,count_negatives,count_zeores,n;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n];
	for( int i = 0; i < n; i++){
		printf("enter the %d element:", i + 1);
		scanf("%d",&arr[i]);
		if ( arr[i] > 0 ){
			count_positives++;
		}
		else if( arr[i] < 0 ){
			count_negatives++;
		}
		else
			count_zeores++;
	}
	printf("the number of positive elements are: %d\n",count_positives);
	printf("the number of negative elements are: %d\n",count_negatives);
	printf("the number of zeroes are:%d\n",count_zeores);
}
