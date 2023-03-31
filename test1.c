#include <stdio.h>
int main (int argc, char *argv[]) {
	printf ("Test v15.01: OK.\n");
	printf ("argc: %d", argc);
	printf ("argv[0]: %s\n", argv[0]);
	for (int i=0; i<argc; i++) {
		printf("%d. %s\n", i, argv[i]); 
	}
	return 0;
}

