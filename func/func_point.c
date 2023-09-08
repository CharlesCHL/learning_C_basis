#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int sub(int a, int b);

int main() 
{

		int a = 3, b = 5;
		int res_1, res_2;

		int (*func[2])(int, int);
		int (*p)(int, int);
		int (*q)(int, int);

		func[0] = add;
		func[1] = sub;
		p = add;
		q = sub;

//		res = add(a, b);
		res_1 = func[0](a, b);
		res_2 = func[1](a, b);

		printf("res_1 = %d\n", res_1);
		printf("res_2 = %d\n", res_2);


		return 0;

}

int add(int a, int b) 
{
		return a + b;
}

int sub(int a, int b)
{
	return a - b;
}





