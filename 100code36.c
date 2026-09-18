#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i + j == n - 1)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}