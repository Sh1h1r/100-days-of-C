#include <stdio.h>

int main() {
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    printf("Date in new format: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
