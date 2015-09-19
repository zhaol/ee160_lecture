#include <stdio.h>

main() {
    int apples = 1;
    int bananas = 2;
    int double_the_bananas = bananas * 2;
    printf ("1 + 2 * 2 = %d \n", 1 + 2 * 2);
    printf ("(1 + 2) * 2 = %d \n", (1 + 2) * 2);
    printf ("1 + (2 * 2) = %d \n", 1 + (2 * 2));
    
    printf("normal recipe version: %d\n", apples + bananas);
    printf("recipe version for banana lovers: %d\n", apples + double_the_bananas);
}