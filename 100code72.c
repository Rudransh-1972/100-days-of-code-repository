#include <stdio.h>

int main() {
    int n, k, i, sum = 0, max;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for (i = 0; i < k; i++)
        sum += arr[i];

    max = sum;

    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i-k];
        if (sum > max)
            max = sum;
    }

    printf("%d", max);
    return 0;
}