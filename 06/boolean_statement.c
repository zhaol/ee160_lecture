#include <stdio.h>

main() {
    printf ("1 means true\n");
    printf ("0 means false\n");
    printf ("\n");
    
    printf ("2 <  3: %d\n", 2 <  3);
    printf ("2 >  3: %d\n", 2 >  3);
    printf ("\n");
    
    printf ("2 <= 3: %d\n", 2 <= 3);
    printf ("3 <= 3: %d\n", 3 <= 3);
    printf ("2 >= 3: %d\n", 2 >= 3);
    printf ("3 >= 3: %d\n", 3 >= 3);
    printf ("\n");
    
    printf ("3 == 3: %d\n", 3 == 3);
    printf ("2 == 3: %d\n", 2 == 3);
    printf ("\n");
    
    printf ("3 != 3: %d\n", 3 != 3);
    printf ("2 != 3: %d\n", 2 != 3);
    printf ("\n");
}