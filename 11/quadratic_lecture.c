#include <stdio.h>

main () {
    float a;
    float b;
    float c;
    float z;
   float x;// numerator
   float y;// denominator
   
    printf("Please enter a b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    x = ((-b) + ((b * b) - (4 * a * c)));
    y = (2 * a);
    z = x / y;
    
    printf("The answer is: %f\n", z);
}