#include <stdio.h>

int main() {
    int length;
    printf("enter the length of the array:");
    scanf("%d", &length);

    int arr[length];
    for(int i = 0; i < length; i++){
        printf("enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("enter the number of rotations:");
    scanf("%d", &k);
    k = k % length;
    int arr2[length];
    for(int i = 0; i < length; i++){
        arr2[(i + k)%length] = arr[i];
    }
    printf("the array after rotation is:\n");
    for(int i = 0; i < length; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}
