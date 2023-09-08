#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE	32

struct simp_st
{
		int i;
		float f;
		char ch;
};

struct birthday_st
{
		int year;
		int month;
		int day;
};

struct student_st
{
		int id;
		char name[NAMESIZE];
		struct birthday_st birth;
		float score;
};	

void func(struct simp_st* st_p) 
{
		printf("%ld\n", sizeof(*st_p));
}

int main() 
{
		struct simp_st a;
		struct simp_st* p = &a;

		func(p);

		printf("sizeof(a) = %ld\n", sizeof(a));
		printf("sizeof(p) = %ld\n", sizeof(p));


#if 0
		int i;

		struct simp_st a = {123, 456.789, 'a'};
		a.i = 321;
		
		struct student_st stu = {10012, "Charles", {2023, 7, 12}, 95};
		struct student_st stuarr[2] = {{10011, "Alan", {2023, 7, 12}, 99}, stu};

		struct student_st* stu_p = &stu;

		printf("%d\t%f\t%c\n", a.i, a.f, a.ch);
		printf("\n");
	
		for (i = 0; i < 2; i++) {
				printf("%d\n%s\n%d - %d - %d\n%f\n", stuarr[i].id, stuarr[i].name, stuarr[i].birth.year, stuarr[i].birth.month, stuarr[i].birth.day, stuarr[i].score);
				printf("\n");
		}

//		printf("%d\n%s\n%d - %d - %d\n%f\n", stu_p -> id, stu_p -> name, stu_p -> birth.year, stu_p -> birth.month, stu_p -> birth.day, stu_p -> score);

#endif


		return 0;

}






