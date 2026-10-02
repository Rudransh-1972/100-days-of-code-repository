#include <stdio.h>

int main() {
    int n, x;
    int left, right;

    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        left = x * (x + 1) / 2;
        right = (x + n) * (n - x + 1) / 2;

        if (left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}