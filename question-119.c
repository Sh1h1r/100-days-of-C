#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorAll = 0;
    for (int i = 0; i < n; i++)
        xorAll ^= arr[i];

    for (int i = 1; i <= n - 1; i++)
        xorAll ^= i;

    printf("%d", xorAll);
    return 0;
}
