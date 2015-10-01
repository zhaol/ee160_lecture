#include <stdio.h>

main() {
	int variable1 = 2;
	int variable2 = 3;
	
	variable1 = add_one_fail(variable1, variable2);
	variable2 = add_one(variable2);
	
	printf("variable1: %d\n", variable1);
	printf("variable2: %d\n", variable2);
    
}

int add_one_fail(int variable, int variable2) {
    //return variable + 1;
    return variable2 + 1;
}
int add_one(int variable) {
	return ++variable;
}