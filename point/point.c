#include <stdio.h>
#include <stdlib.h>


int main () 
{
	int* p[3];
	int i, j;
	int a[2][3] = {1, 2, 3, 4, 5, 6};
	int (*q)[3] = a;

	for (i = 0; i < 3; i++) 
		printf("p[%d] --> %p\n", i, p[i]);
	
//	for (j = 0; j < 3; j++) 
//		printf("q[%d] --> %d\n", j, *q[j]);


	exit(0);

}
