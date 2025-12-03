#include <stdio.h>

int main() {
    int n = 3;
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int N = n;

    for (int line = 1; line <= (2*N - 1); line++) {
        int start_col = 0;
        int count = 0;

        if (line <= N) {
            start_col = line - 1;
            count = line;
        } else {
            start_col = N - 1;
            count = 2*N - line;
        }

        int r = (line <= N) ? 0 : line - N;
        int c = start_col;

        if (line % 2 == 0) {
            for (int i = 0; i < count; i++) {
                printf("%d ", a[r + i][c - i]);
            }
        } else { 
            for (int i = count - 1; i >= 0; i--) {
                printf("%d ", a[r + i][c - i]);
            }
        }
    }

    return 0;
}
