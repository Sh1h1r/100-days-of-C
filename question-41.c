#include <stdio.h>

int main() {
    int num, original, first, last, digits, temp, divisor, middle, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    last = num % 10;
    
    digits = 0;
    temp = num;
    while(temp != 0) {
        temp = temp / 10;
        digits++;
    }
    
    divisor = 1;
    temp = digits - 1;
    while(temp > 0) {
        divisor = divisor * 10;
        temp--;
    }
    first = num / divisor;
    
    middle = (num % divisor) / 10;
    
    result = last;
    
    temp = digits - 2;
    while(temp > 0) {
        result = result * 10;
        temp--;
    }
    result = result + middle;
   
    result = result * 10 + first;
    
    printf("Original number: %d\n", original);
    printf("After swapping first and last digit: %d\n", result);
    
    return 0;
}
