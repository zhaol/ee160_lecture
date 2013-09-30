#include <stdio.h>

main () {
  int x;
  int y;
  float answer;
  
  printf("enter numbers: \n");
  scanf("%d %d", &y, &x);
  
  answer = (float) (-x+(x*x-4*y))    / (2*y);
  
  printf("answer: %f\n", (float) answer);
  
  
}