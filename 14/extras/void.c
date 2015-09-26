#include <stdio.h>

void func(int *var) {
    printf("in function\n");
    (*var)++;
    //*(var++);
    //return 1234;
}

main() {
    int var = 1;
    printf("before function\n");
   //printf("function returns: %d\n", func());
   func(&var);
   printf("after function\n");
   //printf("var is not: %d\n", *(&(var+1)));
}


