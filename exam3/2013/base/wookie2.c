/*
 image -> 2d array
 input file (named “input.data” located in the same folder that the program is executed from) -> files
 number of occurrences -> counting 
 2x2 footprint -> detecting something 2x2
 next to the border -> don't count
 have at least 1 spacing between it and an adjacent object -> bordered with O's
 There are 1 object(s). -> printf
*/
 
#include <stdio.h>

#define WIDTH 13 // 13 across
#define HEIGHT 7 //  7 down

/*
-------------
|OOOOOOOXXOO|
|OOOXXOOXXOO|
|OOOXXOOXXOO|
|OOOOOOOOOOO|
|OOOOOOOOOOO|
-------------
*/

int main() {
  //declare and initialize variables
  char input[HEIGHT][WIDTH];
  int counter = 0;
  int row = 0;
  int col = 0;
  
  FILE *input_file("input.data", "r"); //read in file
  
  if(input_file != NULL) {
    printf("input file opened successfully\n");
    
    //save data to a 2d array
    for(row=0;row<=HEIGHT;row++) {
      for(col=0;col<=WIDTH;col++) {
        fscanf(input_file, " %c", &input[row][col]);
      }
    }
    
    //loop through the 2d array
    for(row=0;row<=HEIGHT;row++) {
      for(col=0;col<=WIDTH;col++) {
        
        if( input[row][col] == 'X') &&
          ( input[row][col+1] == 'X' && '' )
          ( input[row+1][col] == 'X' && '' )
          ( input[row+1][col+1] == 'X' && '' )
          
          ( input[row-1][col] == 'O' && '' )
          ( input[row-1][col] == 'O' && '' )
          ( input[row-1][col+1] == 'O' && '' )
          ( input[row-1][col+2] == 'O' && '' )
          ( input[row][col-1] == 'O' && '' )
          ( input[row][col+2] == 'O' && '' )
          ( input[row+1][col-1] == 'O' && '' )
          ( input[row+1][col+2] == 'O' && '' )
          ( input[row+2][col-1] == 'O' && '' )
          ( input[row+2][col+1] == 'O' && '' )
          ( input[row+2][col+2] == 'O' && '' )
        //check for 2x2 footprint --> check by hand
        //if found increase counter  
      }
    }
  } else {
    printf("input file failed to open\n");
  }
  
  //print out the count
  printf("There are %d object(s).", counter);
}