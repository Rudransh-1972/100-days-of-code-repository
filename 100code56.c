#include <stdio.h>

int main() {
    char date[20];
    int day, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/04/%d", &day, &year);

    printf("Date in new format: %02d-Apr-%d", day, year);

    return 0;
}