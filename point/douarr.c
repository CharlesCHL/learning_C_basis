#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int arr[2][3] = {1, 2, 3, 4, 5, 6};
	int i, j;
	int* p;

//	p = arr;
	p = *arr;

	printf("%p, %p\n", arr, arr + 1);

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%p ---> %d\n", &arr[i][j], arr[i][j]);
		}
		printf("\n");
	}



	exit(0);

}

