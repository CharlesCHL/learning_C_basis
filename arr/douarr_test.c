#include <stdio.h>
#include <stdlib.h>

#define M	2
#define N	3
#define K	4

static void change(void) 
{

	int arr_1[M][N] = {1, 2, 3, 4, 5, 6};
	int arr_2[N][M];
	int i, j;

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%d\t", arr_1[i][j]);
			arr_2[j][i] = arr_1[i][j];
		}
		printf("\n");
	}
	
	printf("\n");

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%d\t", arr_2[i][j]);
		}
		printf("\n");
	}


}

static void max(void) {

	int arr[M][N] = {1, 2, 3, 4, 5, 6};
	int i, j;
	int max = arr[0][0], row = 0, colum = 0;

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				row = i;
				colum = j;
			}
		}
	}

	printf("max = %d addition --> [%d, %d]\n", max, row, colum);

}

static void sum(void) {

	int arr[5][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			arr[i][3] += arr[i][j];
			arr[4][j] += arr[i][j];
			arr[4][3] += arr[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for(j = 0; j < 4; j++) {
			printf("%4d\t", arr[i][j]);
		}
		printf("\n");
	}

}


static void mul(void) {

	int arr_1[M][N] = {1, 2, 3, 4, 5, 6};
	int arr_2[N][K] = {1, 2, 0, 4, 7, 1, 5, 3, 4, 0, 5, 6};
	int arr_3[M][K] = {0};
	int i, j, n;

	for (i = 0; i < M; i++) {
		for(j = 0; j < K; j++) {
			for(n = 0; n < N; n++) {
				arr_3[i][j] += arr_1[i][n] * arr_2[n][j];
			}
		}
	}

	for (i = 0; i < M; i++) {
		for (j = 0; j < K; j++) {
			printf("%4d\t", arr_3[i][j]);
		}
		printf("\n");
	}


}
int main() 

{

//	change();
	
//	max();

//	sum();

	mul();

	exit(0);

}























