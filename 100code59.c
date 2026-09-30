#include <stdio.h>

int main() {
    int arr[100], n, x;
    int low = 0, high, mid, ans = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;   // search for first occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("Index of ceil of %d = %d\n", x, ans);

    return 0;
}