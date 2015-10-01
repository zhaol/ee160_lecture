#include <stdio.h>

void add_one_time(int *a, int *b);
	

main() {
	int variable1 = 2;
	int variable2 = 3;
	
	//variable1 = add_one(variable1);
	//variable2 = add_one(variable2);
	add_one_time(&variable1, &variable2);
	printf("variable1: %d\n", variable1);
	printf("variable2: %d\n", variable2);
}

int add_one(int variable) {
	return ++variable;
}

void add_one_time(int *a, int *b) {
	*a = *a + 1;
	*b = *b + 1;
}