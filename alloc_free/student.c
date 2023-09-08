#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMEMAX		1024 


struct student_st {
		int id;
		char *name;
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
		char newname[NAMEMAX];

		do {
				menu();
				ret = scanf("%d", &choice);
				if (ret != 1) break;

				switch(choice)
				{
						case 1:
							tmp.name = malloc(NAMEMAX);
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
		p -> id = q -> id;
		p -> name = malloc(sizeof(q -> name) + 1);
		if(p -> name == NULL) exit(1);
		strcpy(p -> name, q -> name);
		p -> score = q -> score;
}

void stu_show(struct student_st* p)
{
		printf("\n%d\n%s\n%d\n\n", p -> id, p -> name, p -> score);
}

void stu_changename(struct student_st* p, const char* newname)
{
		free(p -> name);
		p -> name = malloc(sizeof(newname) + 1);
		if(p -> name == NULL) exit(2);
		strcpy(p -> name, newname);
}




