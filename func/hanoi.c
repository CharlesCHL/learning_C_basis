#include <stdio.h>
#include <stdlib.h>

void move(int n, int i, int j);

int main() 
{
		int n, i, j;

		printf("enter(n):\n");
		scanf("%d", &n);	
		printf("enter(i):\n");	
		scanf("%d", &i);	
		printf("enter(j):\n");	
		scanf("%d", &j);	
		
		move(n, i, j);

		return 0;

}

void move(int n, int i, int j) 
{
		int k = 6 - i - j;
		
		if (n == 1) {
				printf("%d --> %d\n", i, j);
				return ;
		}

		move(n - 1, i, k);
		printf("%d --> %d\n", i, j);
		move(n - 1, k, j);
		
		return ;

}


//汉诺塔问题



