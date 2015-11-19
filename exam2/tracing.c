#include <stdio.h>

int function(int x, int* y);

int main () {
 int var1 = 1;
 int var2 = 3;
 
 while (var1 != var2) {
   printf("function: %d\n", function(var1, &var2));
 }
 
 printf("var1: %d\n", var1);
 printf("var2: %d\n", var2);
 
 return 0;  
}

int function(int x, int* y) {
 x++;
 *y = *y - 1;
 printf("x: %d\n", x);  
 printf("y: %d\n", *y);
 
 return x;
}