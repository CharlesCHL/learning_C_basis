#include <stdio.h>
#include <stdlib.h>

int func(int i);
int main() 
{
		int i;
		printf("Enter\n");
		scanf("%d", &i);

		int res = func(i);

		printf("%d! = %d\n", i, res);

		return 0;

}

//阶乘

int func(int i) 
{
		if (i < 0) return -1;
		if (i == 0) return 1;
		else return (i * func(i - 1));
}


