#include <stdio.h>
#include <stdlib.h>

#define N	10
#define M	1000

static void sort_1(void) {
	
	int i, j, k, tmp, key;
	int a[N] = {12, 8, 45, 30, 98, 67, 2, 7, 68, 11};

	for (i = N-1; i > 0; i--) {
		key = 0;
		for (j = 0; j < i; j++) {
			if (a[j] > a[j+1]) {
				tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
				key = 1;
			}
		}
		if (key == 0) break;
	}

	for (k = 0; k < N; k++) {
		printf("a[%d] = %d\n", k, a[k]);
	}

}


static void sort_2(void) {

	int a[N] = {12, 8, 45, 30, 98, 67, 2, 7, 68, 11};
	int i, j, k, max, key, tmp;

	for (i = N-1; i > 0; i--) {
		max = a[i];
		key = i;
		for (j = 0; j < i; j++) {
			if (max < a[j]) {
				max = a[j];
				key = j;
			}
		}
		if (key != i) {
			tmp = a[i];
			a[i] = max;
			a[key] = tmp;
		}
	}

	for (k = 0; k < N; k++) {
		printf("a[%d] = %d\n", k, a[k]);
	}

}

static void base_convert(void) {

	int num, base;
	int i = 0;
	int k;
	int arr[64];

	printf("Enter(convert):\n");
	scanf("%d", &num);
	printf("Enter(base):\n");
	scanf("%d", &base);

	do {
		arr[i] = num % base;
		num /= base;
		i++;
	} while (num != 0);

	for (k = i - 1; k >= 0; k--) {
		if (arr[k] >= 10) printf("%c", arr[i] - 10 + 'A');
		else printf("%d", arr[k]);
	}
	printf("\t(%d)\n", base);

}


static void primer(void) {

	int primer[M+1];
	int i, j, k, m;

	for (i = 2; i < 1001; i++) {
		primer[i] = 1;
	}

	for (k = 2; k < 1001; k++) {
		if (primer[i] = 1) {
			for (j = k * 2; j < 1001; j += k) {
				primer[j] = 0;
			}
		}
	}

	for (m = 2; m < 1001; m++) {
		if (primer[m] == 1) printf("%d\n", m);
	}

}



int main()  
{
	
//	printf("sort_1:\n");

//	sort_1();
	
//	printf("sort_2:\n");

//	sort_2();

//	printf("base_convert:\n");

//	base_convert();

	printf("primer:\n");

	primer();

	exit(0);

}
