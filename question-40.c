#include <stdio.h>

int main() {
    long long binary, temp, complement, digit, place;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    temp = binary;
    complement = 0;
    place = 1;
    
    while(temp != 0) {
        digit = temp % 10;
        
        if(digit == 0) {
            complement = complement + (1 * place);
        }
        else if(digit == 1) {
            complement = complement + (0 * place);
        }
        
        place = place * 10;
        temp = temp / 10;
    }
    
    printf("Original binary number: %lld\n", binary);
    printf("1's complement:         %lld\n", complement);
    
    return 0;
}
