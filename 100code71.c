#include <stdio.h>

int main() {
    int n, i, j, nums[100], ans[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        ans[i] = 1;
        for(j = 0; j < n; j++) {
            if(i != j)
                ans[i] *= nums[j];
        }
    }

    for(i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}