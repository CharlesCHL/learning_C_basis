#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{

	char* str_1 = "hello";

	char str_2[] = "hello";

	printf("%d\t%d\n", sizeof(str_1), strlen(str_1));
	printf("%d\t%d\n", sizeof(str_2), strlen(str_2));




/**
	char str[] = "hello";

	strcpy(str, "world");

	puts(str);
*/

#if 0
	char str[] = "I love china";

	char* p = str + 7;

	puts(p);

	puts(str);
#endif


	exit(0);


}
