#ifndef LIST
#define LIST

#include <stdio.h>
#include <stdlib.h>
#include <bool.h>

typedef struct Element{
	struct Element *next;
	int value;
} Element;

typedef struct List{
	Element *first;
	int length;
} List;

List lCreate(void);

void lPush(List*, const int);

void lFree(List);

void lPrint(const List);

void lPop(List*);

int lGet(const List, const int);

void lSet(List, const int, const int);

#endif //LIST
