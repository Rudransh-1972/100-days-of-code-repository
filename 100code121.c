#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter person's name: ");
    scanf("%49s", p.name);

    int choice;
    printf("Select Gender:\n");
    printf("0. Male\n");
    printf("1. Female\n");
    printf("2. Other\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 2) {
        printf("Invalid choice!\n");
        return 0;
    }

    p.gender = (enum Gender)choice;

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;

        case FEMALE:
            printf("Gender: Female\n");
            break;

        case OTHER:
            printf("Gender: Other\n");
            break;
    }

    return 0;
}