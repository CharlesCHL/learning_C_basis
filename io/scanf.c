#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 3 



int main() 

{ 
	int i;
	
	float f;
	
	char ch, str[STRSIZE];

	int ret;
	
	printf("Please enter:\n");

	scanf("%d", &i);

	getchar();

	scanf("%c", &ch);
	//ch = getchar();

	printf("i = %d\nch = %c\n", i, ch);



/*	while(1) {

		ret = scanf("%d", &i);
		if (ret != 1) {
			printf("Enter error\n");
			break;
		}

		printf("i = %d\n", i);

	}*/

//	printf("Please enter for i[int]:\n");

//	scanf("%d, %f", &i, &f);

//	printf("i = %d\n", i);

//	printf("f = %f\n", f);

//	scanf("%s", str);

//	printf("%s\n", str);


	exit(0);



}
