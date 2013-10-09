#include <stdio.h>

int func(int var);

int main () {
  int main_var1 = 1;
  int main_var2 = 2;
  
  main_var1 = func(main_var1);  
  main_var2 = func(main_var2);  
  
  main_var1, main_var2 = func(main_var1, main_var2);
  
  return 0;
}

int func(int var) {
  return ++var;
}