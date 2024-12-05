#include <stdio.h>

int main() {
    for (int n = 1; n <= 81; n++) {
        int i = (n - 1) / 9 + 1;   
        int j = (n - 1) % 9 + 1;   
        printf("%d x %d = %2d\t", i, j, i * j);
        if (j == 9) {
            printf("\n");
        }
    }
    return 0;
}

