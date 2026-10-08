#include <stdio.h>

int main() {
    int n, i, j, arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                printf("%d ", arr[j]);
                break;
            }
        }

        if(j == n)
            printf("-1 ");
    }

    return 0;
}