#include <stdio.h>

main() {
    int dividend;
    int divisor;
    
    printf("Please enter the dividend:\n");
    scanf(" %d", &dividend);
    printf("Please enter the divisor:\n");
    scanf(" %d", &divisor);
    
    printf("%d %d\n", dividend, divisor);
    printf("The quotient is: %d\n", dividend / divisor);
    printf("The remainder is: %d\n", dividend % divisor);
}

/*
Please enter the dividend: 
[user enters 9]
Please enter the divisor: 
[user enters 4]
The quotient is: 2
The remainder is: 1 
*/