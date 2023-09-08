#include <stdio.h>
#include <stdlib.h>

#define IP	int*
typedef int INT;
/*
 * #define IP	int*
 *
 * IP p, q  ---->  int* p, q;   ( p: void*    q:int)
 *
 * typedef IP	int*
 *
 * IP p, q  ----> int* p; int* q;
 * 
 *
 * typedef int ARR[6];
 * ARR a;   ---->    int a[6];
 *
 * struct node_st 
 * {
 * 		int i;
 * 		float f;
 * }
 * typedef struct node_st NODE
 * typedef struct node_st* NODE
 * 
 * NODE a   ---->    struct node_st a;
 * NODEP p  ---->    struct node_st* P;
 *
 * 
 * typedef struct 
 * {
 * 		int i;
 * 		float f;
 * } NODE, * NODEP;
 *
 *
 *
 * typedef int FUNC(int);
 * FUNC f;  ---->  int f(int);
 *
 *
 * typedef int* FUNC(INT);
 * FUNC f;  ---->  int* f(int);
 *
 *
 *
 */


int main() 
{

		INT i = 100;

		printf("%d\n", i);
		IP p, q;
		printf("%p\n%p\n", p, q);


		return 0;

}
