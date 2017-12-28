#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char *argv[]){
	//
	List myList = lCreate();
	lPush(&myList, 3);
	lPush(&myList, 25);
	lPush(&myList, 7);
	lPop(&myList);
	lPush(&myList, 2);
	lSet(myList, 1, 14);
	lPrint(myList);
	fprintf(stdout, "\nList 2 = %d\n", lGet(myList, 2));//2
	fprintf(stdout, "\nList 0 = %d\n", lGet(myList, 0));//3
	fprintf(stdout, "\nList 1 = %d\n", lGet(myList, 1));//25

	lFree(myList);
	//
	return EXIT_SUCCESS;
}
