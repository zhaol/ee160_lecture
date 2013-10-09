#include <stdio.h>

int func(int var);

int global_var1 = 1;

int main () {
  int main_var1 = 1;
  int main_var2 = 2;
  
  global_var1 = 11;
  
  printf("global_var1: %d\n", global_var1);
  func(1);
  func2(&main_var1, &main_var2);
  printf("global_var1: %d\n", global_var1);
  return 0;
}

int func(int var) {
  global_var1 = 21;
  return ++var;
}

int func2(int* var, int* var2) {
  global_var1 = 31;
  global_var2 = 41;
  return ++var;
}



