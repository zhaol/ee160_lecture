#include <stdio.h>

main() {
    printf ("4 - 3 - 2 = %d\n", 4 - 3 - 2); // left to right
    printf ("(4 - 3) - 2 = %d\n", (4 - 3) - 2);
    printf ("4 - (3 - 2) = %d\n", 4 - (3 - 2)); // right to left
}