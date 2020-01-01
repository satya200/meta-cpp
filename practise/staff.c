/* Smart Way to handle organization structure using C */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum ETYPE{Er, Mr, Dr} E_TYPE;

typedef void (*psfptr)(void *);

typedef struct Enginner {
	char *name;
}Eng;

typedef struct Manager {
	char *name;
	Eng *report[10];
}Mgr;

typedef struct Director {
	char *name;
	Mgr *report[10];
}Dir;

Eng *init_eng(const char *name)
{
	if (name == NULL) {
		printf("In init_eng name is NULL\n");
		return NULL;
	}
	Eng *e = NULL;
	e = (Eng *)malloc(sizeof(Eng));
	if (e == NULL) {
		printf("In init_eng malloc return NULL");
		return NULL;
	}
	e->name = strdup(name);
	return e;
}

void eng_ps(void *v)
{
	if (v == NULL) {
		printf("eng_ps v parameter NULL\n");
		return;
	}
	Eng *e = (Eng *)v;
	printf("Salary process for Eng:%s\n",e->name);
}

Mgr *init_mgr(const char *name)
{
	if (name == NULL) {
		printf("In init_mgr name is NULL\n");
		return NULL;
	}
	Mgr *e = NULL;
	e = (Mgr *)malloc(sizeof(Mgr));
	if (e == NULL) {
		printf("In init_mgr malloc return NULL");
		return NULL;
	}
	e->name = strdup(name);
	return e;
	
}

void mgr_ps(void *v)
{
	if (v == NULL) {
		printf("mgr_ps v parameter NULL\n");
		return;
	}
	Mgr *e = (Mgr *)v;
	printf("Salary process for Mgr:%s\n",e->name);
}

Dir *init_dir(const char *name)
{
	if (name == NULL) {
		printf("In init_dir name is NULL\n");
		return NULL;
	}
	Dir *e = NULL;
	e = (Dir *)malloc(sizeof(Dir));
	if (e == NULL) {
		printf("In init_dir malloc return NULL");
		return NULL;
	}
	e->name = strdup(name);
	return e;
	
}

void dir_ps(void *v)
{
	if (v == NULL) {
		printf("dir_ps v parameter NULL\n");
		return;
	}
	Dir *e = (Dir *)v;
	printf("Salary process for Dir:%s\n",e->name);
}

typedef struct Staff {
	E_TYPE type;
	void *p;
}Staff;

int main()
{
	psfptr psarray[] = {eng_ps, mgr_ps, dir_ps};
	Staff staff[] = { { Er, init_eng("Satya") },
			{ Mr, init_mgr("Babu") },
			{ Dr, init_dir("Arun") }
		      };
	/*Staff staff[1];
	staff[0].type = Mr;
	staff[0].p = init_mgr("Hari");*/
	for (int i = 0; i < sizeof(staff)/ sizeof(Staff); i++) {
		psarray[staff[i].type](staff[i].p);
	}
	return 0;
}

