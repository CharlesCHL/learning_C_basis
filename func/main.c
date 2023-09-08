#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{

		printf("argc = %d\n", argc);

		int i;

		for (i = 0; argv[i] != NULL; i++) {
				puts(argv[i]);
		}

//		printf("Hello!\n");


		return 0;


}
