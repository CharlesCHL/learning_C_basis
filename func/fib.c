#include <stdio.h>
#include <stdlib.h>

int fib(int i);

int main() 
{
		int n, res;

		printf("Enter:\n");
		scanf("%d", &n);

		res = fib(n);

		printf("fib(%d) = %d\n", n, res);


		return 0;

}


int fib(int i) 
{
		if (i < 1) return -1;
		if (i == 1) return 1;
		if (i == 2) return 1;
		else return (fib(i - 1) + fib(i - 2));
}



