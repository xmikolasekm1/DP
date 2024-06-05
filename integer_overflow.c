#include <stdio.h>

int main() {
    unsigned short s;
    int i, j;

    printf("Please input [1-666]:");
    scanf("%d", &i);


    s = i;

    j = 666;
    if (s >= j) {
        printf("You can't input more than %d\n", j);
        return -1;
    }

    if (s == (j - 1)) {
        printf("congratulations win :)\n");
    } else {
        printf("Sorry %d is not your lucky number\n", s);
    }

    return 0;
}