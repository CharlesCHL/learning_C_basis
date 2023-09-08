#include <stdio.h>
#include <stdlib.h>



int main() 
{

	int a[] = {5, 1, 7, 2, 8, 2, 3};
	int y;
	int* p = &a[1];

	y = (*--p)++;
	printf("y = %d\n", y);

/**
	int a[3];
	int *p = a;
	int i;

	for (i = 0; i < sizeof(a) / sizeof(*a); i++) {
		scanf("%d", p + i);
	}
	for (i = 0; i < sizeof(a) / sizeof(*a); i++) {
		printf("%p ---> %d\n", a + i, a[i]);
	}
*/	


#if 0
	int a[3] = {1, 2, 3};
	int i;
	int* p = a;

	printf("%p, %p\n", a, a + 1);
	printf("%p, %p\n", p, p + 1);

	for (i = 0 ; i < 3; i++) {
//		printf("%p ---> %d\n", a + i, a[i]);
//		printf("%p ---> %d\n", p + i, a[i]);
		printf("%p ---> %d\n", p + i, *(p + i));
		printf("%p ---> %d\n", p + i, p[i]);
	}



	printf("\n");

#endif

	exit(0);


}
