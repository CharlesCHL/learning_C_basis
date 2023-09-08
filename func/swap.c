#include <stdio.h>
#include <stdlib.h>

int print_value(int a, int b)
{
		printf("%d\t%d\n", a, b);
		return 0;
}

int swap(int* p, int* q) 
{
		int tmp;

		tmp = *p;
		*p = *q;
		*q = tmp;	
}


int main() 
{

		int i = 3, j = 5;

		print_value(i, j);

		swap(&i, &j);

		print_value(i, j);

		exit(0);

}
