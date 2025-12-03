#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("Enter elements of first matrix:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    printf("Enter columns of second matrix: ");
    scanf("%d", &p);

    int b[n][p];
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
            scanf("%d", &b[i][j]);

    int c[m][p];
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            c[i][j] = 0;

    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            for(int k=0;k<n;k++)
                c[i][j] += a[i][k] * b[k][j];

    printf("Product of matrices:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
