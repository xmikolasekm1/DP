#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void zasifruj_data(const char *otvorenytext, const char *kluc) {
    printf("Sifrovanie s sifrovacim klucom: %s\n", kluc);

    printf("Nezasifrovana sprava: %s\n", otvorenytext);
    printf("Zasifrovany text: <zasifrovana sprava>\n");
}

int main() {
    char otvorenytext[100];
    char kluc[100];
    
    printf("Zadaj nezasifrovanu spravu: ");
    fgets(otvorenytext, sizeof(otvorenytext), stdin);
    otvorenytext[strcspn(otvorenytext, "\n")] = '\0';

    
    printf("Zadaj sifrovaci kluc: ");
    fgets(kluc, sizeof(kluc), stdin);
    
    kluc[strcspn(kluc, "\n")] = '\0';

    
    zasifruj_data(otvorenytext, kluc);
    printf("Stlac enter");
    getchar();
    return 0;
}
