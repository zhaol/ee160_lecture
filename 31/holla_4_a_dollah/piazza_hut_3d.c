#include <stdio.h>
#define MAX_PAGE 2
#define MAX_ROWS 3
#define MAX_COLS 2

main() {
  //int list_of_values[MAX_ROWS];
  //int book[MAX_PAGE][MAX_ROW][MAX_COL] = {0};
  int book_of_lies[MAX_PAGE][MAX_ROWS][MAX_COLS] = {
    {
      {1, 2},
      {3, 4},
      {5, 6}
    },
    
    {
      {1, 4},
      {2, 5},
      {10, 11}
    }
  };
  
  printf("[0][0][0]: %d, [0][0][1]: %d\n", book_of_lies[0][0][0], book_of_lies[0][0][1]);
  printf("[0][1][0]: %d, [0][1][1]: %d\n", book_of_lies[0][1][0], book_of_lies[0][1][1]);
  printf("[0][2][0]: %d, [0][2][1]: %d\n", book_of_lies[0][2][0], book_of_lies[0][2][1]);
  
  printf("[1][0][0]: %d, [1][0][1]: %d\n", book_of_lies[1][0][0], book_of_lies[1][0][1]);
  printf("[1][1][0]: %d, [1][1][1]: %d\n", book_of_lies[1][1][0], book_of_lies[1][1][1]);
  printf("[1][2][0]: %d, [1][2][1]: %d\n", book_of_lies[1][2][0], book_of_lies[1][2][1]);
  /*
  [0][0]
  [0][1]
  [1][0]
  [1][1]
  [2][0]
  [2][1]
  
  [0][0][0]
  [0][0][1]
  [0][1][0]
  [0][1][1]
  [1][0][0]
  [1][0][1]
  [1][1][0]
  [1][1][1]
  */
  
  // why doesn't this code compile?
  
  //int index;
  //for(index=0;index<=5;index++) {
  //  printf("[%d]: %d\n", index, *(book_of_lies+index));
  //}
  
}