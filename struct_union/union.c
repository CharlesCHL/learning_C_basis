#include <stdio.h>
#include <stdlib.h>

union test_un 
{
		int i;
		float f;
		char ch;
};



int main()
{
		union test_un a;

		a.f = 345.6;
		printf("%ld\n", sizeof(a));
		printf("%f\n", a.f);


		exit(0);

}
