#include <stdio.h>

int main() {
    int n, i, arr[100], sum, max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = max = arr[0];

    for (i = 1; i < n; i++) {
        if (sum < 0)
            sum = arr[i];
        else
            sum += arr[i];

        if (sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}