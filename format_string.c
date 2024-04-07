#include <stdio.h>

void vulnerableFunction(char *userInput1, char *userInput2) {
    // Format string vulnerability
    printf(userInput1);
    printf(" - ");
    printf(userInput2);
    printf("\n");
}

int main() {
    char userInput1[50];
    char userInput2[50];

    printf("Enter your first name: ");
    scanf("%s", userInput1);

    printf("Enter your last name: ");
    scanf("%s", userInput2);

    vulnerableFunction(userInput1, userInput2);

    return 0;
}
