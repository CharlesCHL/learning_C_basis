#include <stdio.h>
#include <stdlib.h>

#define PI		3.1415

int main() 
{

	int i = 1;
	int j = 100;
	const int* const p = &i;
	//p = &j;
	//i = 10;
	//*p = 10;
	printf("%d\n", *p);

#if 0
	const float pi = 3.1415;

	printf("%f\n", pi);

//	pi = 3.14;

	float* p = &pi;
	
	*p = 3.14159;

	printf("%f\n", *p);

#endif

	exit(0);
}
