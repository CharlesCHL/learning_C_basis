#include <stdio.h>
#include <stdlib.h>


#define LEFT	1
#define RIGHT	100

int main()  
{


	int i = LEFT, sum = 0;

#if 0
	while (i <= RIGHT) {

		sum += i;

		i++;

	}
#endif

#if 0
	do {

		sum += i;

		i++;

	} while (i <= RIGHT);
#endif 


#if 0
	for (i = LEFT; i <= RIGHT; i++) {

		sum += i;

	}


#endif

	loop_1:
		
		sum += i;
		
		i++;

	if (i <= RIGHT) 
		
		goto loop_1;

	printf("sum = %d\n", sum);

	exit(0);


}
