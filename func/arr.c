#include <stdio.h>
#include <stdlib.h>

void print_arr(int* arr, int len);
void func(int* arr, int len);

int main() 
{

		int a[] = {1, 3, 5, 7, 9};
		
		print_arr(a, sizeof(a) / sizeof(*a));

		func(a, sizeof(a) / sizeof(*a));

		print_arr(a, sizeof(a) / sizeof(*a));

		return 0;

}


void print_arr(int* arr, int len)
{
		int i;

		for (i = 0; i < len; i++) {
				printf("%d\t", *(arr + i));
		}
		printf("\n");
}

void func(int* arr, int len) 
{
		int i = 0, j = len - 1;
		int tmp = 0;
		while (i < j) {
			tmp = *(arr + i);
			*(arr + i) = *(arr + j);
			*(arr + j) = tmp;
			i++;
			j--;
		}

}	








