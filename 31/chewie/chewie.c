#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 2
#define MAX_PAGE 1

int main() {
  int table_of_values[MAX_ROWS][MAX_COLS] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };
  int book[MAX_PAGE][MAX_ROWS][MAX_COLS] = {
    {0, 1}
    {1, 2}
  };
  
  printf("[0][0]: %d, [0][1]: %d\n", table_of_values[0][0], table_of_values[0][1]);
  printf("[1][0]: %d, [1][1]: %d\n", table_of_values[1][0], table_of_values[1][1]);
  printf("[2][0]: %d, [2][1]: %d\n", table_of_values[2][0], table_of_values[2][1]);
  
  printf(" %d, %d\n", book[0][0][0], book[0][0][1]);
  printf(" %d, %d\n", book[0][1][0], book[1][0][0]);
  return 0;
}