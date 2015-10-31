#include <stdio.h>

main () {
    printf("T && T: %d\n", (1 == 1) && (1 == 1));
    printf("T && F: %d\n", (1 == 1) && (1 != 1));
    printf("F && T: %d\n", (1 != 1) && (1 == 1));
    printf("F && F: %d\n", (1 != 1) && (1 != 1));
    printf("\n");
    printf("T || T: %d\n", (1 == 1) || (1 == 1));
    printf("T || F: %d\n", (1 == 1) || (1 != 1));
    printf("F || T: %d\n", (1 != 1) || (1 == 1));
    printf("F || F: %d\n", (1 != 1) || (1 != 1));
}
