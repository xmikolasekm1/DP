#include <stdio.h>

char heslo[] = "NaseVelmiTajneHeslo.123";

int main(int argc, char **argv) {
    printf("Heslo je na adrese: %p\n", &heslo);
    char buffer[32];
    gets(buffer);
    printf(buffer);
    printf("\n");
    return 0;
}
