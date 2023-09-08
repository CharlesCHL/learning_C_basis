#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE	32 


struct student_st {
		int id;
		char name[NAMESIZE];
		int score;

};

void menu(void);
void stu_set(struct student_st* p, struct student_st* q);
void stu_show(struct student_st* p);
void stu_changename(struct student_st* p, const char* newname); 


int main() 
{
		int choice, ret;
		struct student_st stu, tmp;
		char newname[NAMESIZE];

		do {
				menu();
				ret = scanf("%d", &choice);
				if (ret != 1) break;

				switch(choice)
				{
						case 1:
							printf("Enter[id][name][score]:\n");
							scanf("%d%s%d", &tmp.id, tmp.name, &tmp.score);
							stu_set(&stu, &tmp);
							break;
						case 2:
							printf("Enter new name:\n");
							scanf("%s", newname);
							stu_changename(&stu, newname);
							break;
						case 3:
							stu_show(&stu);
							break;
						default:
							printf("\nERROR\n");
				}
				sleep(2);
		} while(1);	

		return 0;
}

void menu(void) 
{
		printf("\n1	set\n2	change name\n3	show\n\n");
		printf("Enter\n");
}
		

void stu_set(struct student_st* p, struct student_st* q) 
{	
		*p = *q;
}

void stu_show(struct student_st* p)
{
		printf("\n%d\n%s\n%d\n\n", p -> id, p -> name, p -> score);
}

void stu_changename(struct student_st* p, const char* newname)
{
		strncpy(p -> name, newname, NAMESIZE);
}




