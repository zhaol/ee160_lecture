#include <stdio.h>

void my_function();
void your_function();

int main () {
  printf("beginning of main\n");  
  my_function();
  printf("middle of main\n");  
  your_function();
  printf("end of main\n");  
  return 0;
}

void my_function() {
  printf("inside my_function\n");  
  return 23;
}

void your_function() {
  printf("inside your_function\n");
}