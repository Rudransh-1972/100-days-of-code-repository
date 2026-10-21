#include <stdio.h>

int main() {
    int n, i, repeated = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        repeated ^= arr[i];
    }

    for (i = 1; i < n; i++) {
        repeated ^= i;
    }

    printf("%d", repeated);

    return 0;
}