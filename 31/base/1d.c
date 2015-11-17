#include <stdio.h>

main() {
  int list[6] = {1,2,3,4,5,6};
  
  printf("0: %d\n", list[0]);
  printf("1: %d\n", list[1]);
  printf("2: %d\n", list[2]);
  printf("3: %d\n", list[3]);
  printf("4: %d\n", list[4]);
  printf("5: %d\n", list[5]);
  
  printf("\n\n");
  
  printf("0: %d ,", list[0*2+0]); //[0][0]
  printf("1: %d\n", list[0*2+1]); //[0][1]
  printf("2: %d ,", list[1*2+0]); //[1][0]
  printf("3: %d\n", list[1*2+1]); //[1][1]
  printf("4: %d ,", list[2*2+0]); //[2][0]
  printf("5: %d\n", list[2*2+1]); //[2][1]
  
  int row_elements = 2;
  printf("0: %d ,", list[0*row_elements+0]); //[0][0]
  printf("1: %d\n", list[0*row_elements+1]); //[0][1]
  printf("2: %d ,", list[1*row_elements+0]); //[1][0]
  printf("3: %d\n", list[1*row_elements+1]); //[1][1]
  printf("4: %d ,", list[2*row_elements+0]); //[2][0]
  printf("5: %d\n", list[2*row_elements+1]); //[2][1]
}