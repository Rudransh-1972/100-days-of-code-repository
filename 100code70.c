#include <stdio.h>

int main() {
    int n, a[100], i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        for(j = i - 1; j >= 0; j--) {
            if(a[j] > a[i])
                break;
        }
        if(j >= 0)
            printf("%d ", a[j]);
        else
            printf("-1 ");
    }

    return 0;
}