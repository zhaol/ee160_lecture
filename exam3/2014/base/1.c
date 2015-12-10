#include <stdio.h>
#define ARRAY_OFFSET -1
#define MAX_ROWS 10
#define MAX_COLS 10

int main(){
    // declare variables
    FILE *input_file_pointer = fopen("input.data", "r"); // open the read only; and it's at the correct location
    int matrix[MAX_ROWS][MAX_COLS]; // 2d array to hold the data, which int
    char output[MAX_ROWS][MAX_COLS]; // 2d array to hold the output, which is char
    
    if (input_file_pointer == NULL) { //open data file and check that it opened correctly
        printf("input file failed to open\n");
    } else {
        //data file was opened correctly
        printf("input file opened successfully\n");
    
        // read input file to matrix
        int rows_counter, columns_counter;
        for (rows_counter=1; rows_counter<=MAX_ROWS; rows_counter++) {
            for (columns_counter=1; columns_counter<=MAX_COLS; columns_counter++) {
                fscanf(input_file_pointer, "%d", &matrix[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET]);  //loop through and scan in
                // integers
                // fscanf; you need to tell it which address space (using &) to store the information
                // address space can be a variable or an element of an array
                // fscanf works in this situation because the integers are separated by space
            }
        }
        
        // process matrix
        for (rows_counter=1; rows_counter<=MAX_ROWS; rows_counter++) {
            for (columns_counter=1; columns_counter<=MAX_COLS; columns_counter++) {
                // loop through again and process (essentially the bulk of the program)
                if((matrix[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] % 3 == 0) &&
                    (matrix[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] % 5 == 0)) {
                  // divisible by 3 and 5
                    output[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] = 'z'; //characters
                } else if (matrix[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] % 3 == 0) {
                  // divisible by 3 only
                    output[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] = 'f';
                } else if (matrix[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] % 5 == 0) {
                  // divisble by 5 only
                    output[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] = 'b';
                } else {
                  // everything else
                    output[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET] = '-';
                }
                //////////
            }
        }
        
        // output matrix
        for (rows_counter=1; rows_counter<=MAX_ROWS; rows_counter++) {
            for (columns_counter=1; columns_counter<=MAX_COLS; columns_counter++) {
              // looping through and printing back out the matrix of characters
                printf("%c", output[rows_counter + ARRAY_OFFSET][columns_counter + ARRAY_OFFSET]);
            }
            printf("\n");
        }
        
        fclose(input_file_pointer); // don't forget to close your file to avoid problems on the next execution of the program
    }
    
    return 0;
}
