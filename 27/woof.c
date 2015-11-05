#include <stdio.h>

main(){
    int i;
    int a=4;
    char rawr;
    
    for(i=1; i<= a; i+=2, a++){
        printf("loop\n");
        printf("%d\n", i);
        printf("%d\n", a);
        scanf("%c", &rawr);
    }
}