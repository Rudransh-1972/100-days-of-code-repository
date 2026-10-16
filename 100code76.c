#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k, max = 0, count;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        int seen[256] = {0};
        count = 0;

        for (j = i; s[j] != '\0'; j++) {
            k = (unsigned char)s[j];

            if (seen[k])
                break;

            seen[k] = 1;
            count++;
        }

        if (count > max)
            max = count;
    }

    printf("%d\n", max);
    return 0;
}