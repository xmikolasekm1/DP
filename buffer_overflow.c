#include <stdio.h>
#include <string.h>


int main(void) {
    char buff[15];
    int pass = 0;

    printf("\n Zadajte heslo: \n");
    gets(buff);


    if (strcmp(buff, "NaseZvoleneHeslo")) {
        printf("\n Nespravne heslo! \n");
    } else {
        printf("\n Spravne heslo! \n");
        pass = 1;
    }


    if (pass) {
        printf("\n Pouzivatel ziskal administratorske prava! \n");
    }


    return 0;
}
