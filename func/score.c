#include <stdio.h>
#include <stdlib.h>

#define M	3
#define N	4

float average_score_1(int* p, int i);
void average_score_2(int (*p)[N], int i, int j);

int main() 
{

		int arr[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

		printf("ave = %f\n", average_score_1(*arr, M * N));  
		average_score_2(arr, M, N); 
		
		return 0;

}

float average_score_1(int* p, int i) 
{
		float sum = 0;
		int n;

		for (n = 0; n < i; n++) {
				sum += *(p + n);
		}

		return sum / i;

}


void average_score_2(int (*p)[N], int i, int j) 
{
		printf("%s\n", __FUNCTION__);

		return ;

}




