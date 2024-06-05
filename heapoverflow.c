#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>

struct data {
    char meno[64];
};

struct fp {
    int (*fp)();
};

void vitaz() {
    printf("Level uspesne prejdeny!\n");
}

void nowinner() {
    printf("Level nebol prejdeny!!!!!\n");
}

int main(int argc, char **argv) {
    struct data *d;
    struct fp *f;

    d = malloc(sizeof(struct data));
    f = malloc(sizeof(struct fp));
    f->fp = nowinner;

    printf("data su na adrese %p, fp je na adrese %p\n", d, f);

    strcpy(d->meno, argv[1]);

    f->fp();

}

