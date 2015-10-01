#include <stdio.h>
//  This program shows how to pass a reference to a function
main() {
	int main_variable = 2;
	function(&main_variable);
	printf("%d\n", main_variable);
}

function(int *function_variable) {
	(*function_variable)++;
	printf("%d\n", *function_variable);
}