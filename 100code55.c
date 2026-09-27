#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials with surname: ");

    printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            if (name[i + 1] != '\n')
                printf("%c.", name[i + 1]);
        }
    }

    return 0;
}