#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>

int main(int argc, char **argv) {
    char *file;
    char buffer[4096];
    int ffd, rc, i, j;
    struct timeval t0, t1;
    long dt;


    if (argc < 2) {
        printf("%s Obsah suboru \n\t sa vypise ak mas k nemu pristup!\n", argv[0]);
        exit(1);
    }

    file = argv[1];

    gettimeofday(&t0, NULL);        // TIME OF CHECK

    if (access(argv[1], R_OK) == 0) {
        for (i = 0; i < 1000000; i++) { j = (j * i) % 1000; }  // WASTE SOME TIME

        gettimeofday(&t1, NULL);        // TIME OF USE

        ffd = open(file, O_RDONLY);
        if (ffd == -1) {
            printf("Nepodarilo sa otvorit subor!!\n");
            exit(EXIT_FAILURE);
        }

        rc = read(ffd, buffer, sizeof(buffer));
        if (rc == -1) {
            printf("Nie je mozne citat zo suboru: %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        printf("%s\n", buffer);

        dt = (t1.tv_sec - t0.tv_sec) * (int) 1e6 + (t1.tv_usec - t0.tv_usec);
        printf("Vulnerable time interval: %d microsec\n", dt);

    } else {
        printf("Nemas pristup k  %s\n", file);
    }
}
