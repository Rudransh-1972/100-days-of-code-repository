#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;

    scanf("%d", &m);
    int a[m];

    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);
    int b[n];

    for (j = 0; j < n; j++)
        scanf("%d", &b[j]);

    int c[m + n];

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    for (i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    return 0;
}