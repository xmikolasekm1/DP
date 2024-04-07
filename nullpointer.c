#include <stdio.h>
#include <string.h>

void vulnerable_function(char *str) {
    // Unsafe strcpy operation using a potentially null pointer
    strcpy(str, "Vulnerable function was called!");
}

int main() {
    char *user_input = NULL;
    
    printf("Enter some text: ");
    
    // Reading user input into a potentially null pointer
    scanf("%s", user_input);
    
    // Calling the vulnerable function with user input
    vulnerable_function(user_input);

    // This line will not be reached due to potential crash in vulnerable_function
    printf("After vulnerable function\n");

    return 0;
}

