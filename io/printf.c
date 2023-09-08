#include <stdio.h>
#include <stdlib.h>

#define STRSIZE     32

int main () {
/*	char ch = 65;

	int i = 123;

	printf("ch = %c\n", ch);
	
	printf("i = %2d\n", i);

	float f = 123.456;

	printf("f = %8.1f\n", f);

	char str[STRSIZE] = "helloworld";

	printf("str = %-10.5s over\n", str);

	*/

	int i = 255;

	printf("i = %#o\ni = %#x\n", i, i);

	float f = 123.456;

	printf("f = %e\n", f);

	exit(0);

}
