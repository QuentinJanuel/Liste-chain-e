#include "list.h"

List lCreate(void){
	List l = {NULL, 0};
	return l;
}

void lPush(List *l, const int x){
	Element *e = malloc(sizeof(*e));
	e->next = NULL;
	e->value = x;
	if(l->length == 0){
		l->first = e;
	}else{
		Element *cur = l->first;
		int i;
		for(i = 0; i < l->length-1; i++)
			cur = cur->next;
		cur->next = e;
	}
	l->length++;
}

void lPrint(const List l){
	if(l.length > 0){
		Element *cur = l.first;
		int i = 0;
		for(; i < l.length; i++){
			fprintf(stdout, "list[%d] = %d;\n", i, cur->value);
			cur = cur->next;
		}
	}
}

void lPop(List *list){
	Element *cur = list->first;
	int i;
	if(list->length == 1){
		free(list->first);
		list->first = NULL;
	}else{
		for(i = 0; i < list->length-1; i++){
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;
	}
	list->length--;
}

void lFree(List l){
	int i = 0;
	for(; i < l.length; i++)
		lPop(&l);
}

int lGet(const List l, const int index){
	Element *cur = l.first;
	int i = 0;
	for(; i < index; i++)
		cur = cur->next;
	return cur->value;
}

void lSet(List l, const int index, const int x){
	Element *cur = l.first;
	int i = 0;
	for(; i < index; i++)
		cur = cur->next;
	cur->value = x;
}
