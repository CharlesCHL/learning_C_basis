#include <stdio.h>
#include <stdlib.h>

int main() 
{

		int* p = NULL;

		p = malloc(sizeof(int));
		if (p == NULL) {
				printf("malloc() error\n");
				exit(1);
		}
		
		*p = 3;
		printf("%p ---> %d\n", p, *p);
		free(p);

		*p = 5;
		printf("%p ---> %d\n", p, *p);
		
		
		
		exit(0);
	
}
