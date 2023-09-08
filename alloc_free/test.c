#include <stdio.h>
#include <stdlib.h>

void func(int* p, int i);

int main() 
{

		int num = 100;
		int* p = NULL;

		func(p, num);
		free(p);


		exit(0);

}

void func(int* p, int i)
{
		p = malloc(100);

		if(p == NULL) exit(1);

		return ;

}




