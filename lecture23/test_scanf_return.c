#include <stdio.h>

int main () {
  int ret_val = -111;  
  int blah;
  
  ret_val = scanf("%d", &blah);
  printf("%d\n", ret_val);
  
  return 0;  
}