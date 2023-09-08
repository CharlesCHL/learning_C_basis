#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRSIZE	32


int main() 
{
	
	char str[STRSIZE] = "hello";
	char str_1[STRSIZE] = "helloa";

	printf("%d\n", strcmp(str, str_1));
	printf("%d\n", strncmp(str, str_1, 5));


//	printf("%d\n", strlen(str));
//	printf("%d\n", sizeof(str));

//	strcpy(str, "abcde");
//	strncpy(str, "abcdef", 3); 


//	strcat(str, " ");
//	strcat(str, "world!");

//	strncat(str, " ", STRSIZE-1);
//	strncat(str, "world!", STRSIZE-1);
//	puts(str);


	exit(0);

}
