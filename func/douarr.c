#include <stdio.h>
#include <stdlib.h>

#define M	3
#define N	4

void print_arr_1(int* arr, int i);
void print_arr_2(int (*arr)[N], int i, int j); 

int main() 
{

		int a[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

		print_arr_1(*a, M * N);
		print_arr_2(a, M, N);

		return 0;

}

void print_arr_2(int (*arr)[N], int i, int j) 
{
		int m, n;

		for (m = 0; m < i; m++) {
				for (n = 0; n < j; n++) {
						printf("%4d", *(*(arr + m) + n));
				}
				printf("\n");
		}
}

void print_arr_1(int* arr, int i) 
{
		int m;
		for (m = 0; m < i; m++) {
			  printf("%d  ", *(arr + m));
		}	  
		printf("\n");
}




