#include <stdio.h>

#define EXIT 0
#define CONTINUE 1

main() {
    /*
    12345
    324
    // non use case: 1adfd
    r
    q
    Jdf
    */
    //scanf(" %d", input);
    //scanf(" %c", input);
    char input[6];
    int exit_flag = CONTINUE;
    
    do {
        printf("Please enter a number to count or 'q' to quit:\n");
        scanf(" %s", input);
        if ('0' <= input[0] && input[0] <= '9') {
            int number = atoi(input);
            int counter;
            for(counter = 1; counter <= number; counter++) {
                printf("counter: %d\n", counter);
            }
        } else if (input[0] == 'q') {
            printf("quitting\n");
            exit_flag = EXIT;   
        } else {
            printf("Please enter a valid entry\n");
        }
    } while (exit_flag == CONTINUE);
}

/*
if (atoi(input) == 0)
*/