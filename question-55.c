#include <stdio.h>

int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1; 

        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", num);
        }
    }

    return 0;
}
