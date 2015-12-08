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
    for(row=1;row<=HEIGHT-1;row++) { //loop through only non border (no - or |)
      for(col=1;col<=WIDTH-1;col++) { //loop through only non border (no - or |)
        /*
        2x2
        bordered by Os
        can't be next to the edge
        OOOO
        OXXO
        OXXO
        OOOO
        
        ABCD
        E12F
        G34H
        IJKL
        */
        if(
            (input[row]  [col]   == 'X') && //1 key/current element
            (input[row]  [col+1] == 'X') && //2
            (input[row+1][col]   == 'X') && //3
            (input[row+1][col+1] == 'X') && //4
            
            (input[row-1][col-1] == 'O') && //A
            (input[row-1][col]   == 'O') && //B
            (input[row-1][col+1] == 'O') && //C
            (input[row-1][col+2] == 'O') && //D
            (input[row][col-1]   == 'O') && //E
            (input[row][col+2]   == 'O') && //F
            (input[row+1][col-1] == 'O') && //G
            (input[row+1][col+2] == 'O') && //H
            (input[row+2][col-1] == 'O') && //I
            (input[row+2][col]   == 'O') && //J
            (input[row+2][col+1] == 'O') && //K
            (input[row+2][col+2] == 'O')    //L
          ) { //check for 2x2 footprint --> check by hand
          counter++; //if found increase counter  
        }
      }
    }
  } else {
    printf("input file failed to open\n");
  }
  
  //print out the count
  printf("There are %d object(s).", counter);
  
  //close file
}