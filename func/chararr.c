#include <stdio.h>
#include <stdlib.h>

char* mystrcpy(char* str_1, const char* str_2);
char* mystrncpy(char* str_1, const char* str_2, int len);

int main() 
{
		char str_1[] = "Helloworld";
		char str_2[128];
		char str_3[128];

		mystrcpy(str_2, str_1);
		mystrncpy(str_3, str_1, 5);
		puts(str_2);
		puts(str_3);

		return 0;

}

char* mystrcpy(char* str_1, const char* str_2) 
{
		char* ret = str_1;

		if (str_1 != NULL && str_2 != NULL) {
				do {
						*str_1++ = *str_2++;
				} while (*str_2 != '\0');
		}
		*str_1 = '\0';

		return ret;

}

char* mystrncpy(char* str_1, const char* str_2, int len) 
{
		char* ret = str_1;
		int i;

		for (i = 0; i < len && *(str_2 + i) != '\0'; i++) {
				*(str_1 + i) = *(str_2 + i);
		}
		*(str_1 + i) = '\0';

		return ret;

}








