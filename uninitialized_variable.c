#include <stdio.h>
#include <stdlib.h>

void display_file_size(char *filename) {
    FILE *file = fopen(filename, "r");

    fseek(file, 0L, SEEK_END);
    long size = ftell(file);
    fclose(file);

    printf("Velkost suboru '%s' je %ld bajtov\n", filename, size);
}

void delete_file(char *filename) {
    if (remove(filename) == 0) {
        printf("Subor '%s' uspesne vymazany\n", filename);
    } else {
        printf("Chyba: Nepodarilo sa vymazat subor '%s'\n", filename);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Pouzitie: %s <filename>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];

    display_file_size(filename);
    delete_file(filename);

    return 0;
}
