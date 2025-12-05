#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[(int)strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    if(isalpha(name[0]))
        printf("%c", toupper(name[0]));

    for(int i = 1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ' && isalpha(name[i])) {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
    return 0;
}
