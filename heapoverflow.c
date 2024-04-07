#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* a = malloc(512);
	char* b = malloc(256);
	char* c;

	fprintf(stderr, "1st malloc(512): %p\n", a);
	fprintf(stderr, "2nd malloc(256): %p\n", b);
	fprintf(stderr, "we could continue mallocing here...\n");
	fprintf(stderr, "set a to \"this is A!\"\n");
	strcpy(a, "this is A!");
	fprintf(stderr, "first allocation %p points to %s\n", a, a);

	fprintf(stderr, "Freeing the first one...\n");
	free(a);

	fprintf(stderr, "if allocate < 512, it will end up at %p\n", a);
	fprintf(stderr, "So, let's allocate 500 bytes\n");
	c = malloc(500);
	fprintf(stderr, "3rd malloc(500): %p\n", c);
	fprintf(stderr, "And put a different string here, \"this is C!\"\n");
	strcpy(c, "this is C!");
	fprintf(stderr, "3rd allocation %p points to %s\n", c, c);
	fprintf(stderr, "first allocation %p points to %s\n", a, a);
}
