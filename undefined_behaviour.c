#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int array[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i <= number; ++i) {
        // Accessing array elements beyond its bounds due to user input
        printf("%d ", array[i]);
    }

    return 0;
}
