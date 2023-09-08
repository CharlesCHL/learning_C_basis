#include <stdio.h>
#include <stdlib.h>


int main()

{

	int a = 9, b = 10;

	int year;

	printf("Enter year:");

	scanf("%d", &year);

	if (year % 4 == 0 && year % 100)
		printf("闰年\n");
	else if (year % 400 == 0) 
		printf("闰年\n");
	else 	
		printf("平年\n");





#if 0
	int score;

	printf("Enter a score([0, 100]):\n");

	scanf("%d", &score); 

	if (score < 0 || score > 100) {
		fprintf(stderr, "Input error\n");
		exit(1);
	}

	if (score >= 90) 
		puts("A");
		else if (score >= 80) 
			puts("B");
			else if (score >= 70)
				puts("C");
				else if (score >= 60)
					puts("D");
					else 
						puts("E");
	

/*
	if (score < 0 || score > 100) {
		fprintf(stderr, "Input error\n");
		exit(1);
	}

	



	if (score <= 100 && score >= 90) 
		puts("A");
	if (score < 90 && score >= 80) 
		puts("B");
	if (score < 80 && score >= 70) 
		puts("C");
	if (score < 70 && score >= 60) 
		puts("D");
	if (score < 60 && score >= 0) 
		puts("E");

*/


#endif

#if 0
	if (b++ < a) {

		printf("1\n");

	} else {

		printf("0\n");

	}

	printf("a = %d\nb = %d\n", a, b);

#endif

//	printf("%d\n", (++b < a, ++a, b++));	

//	printf("a = %d\nb = %d\n", a, b);
	
	exit(0);


}
