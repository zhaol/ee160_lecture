#include <stdio.h>

int main() {
  int i_am_an_integer     = 1;
  float i_am_an_integer_too = 2;
  float i_am_a_float      = 2.2;
  
  printf("1 + 2.2 = %f\n", i_am_an_integer + i_am_a_float);//*3.2 or 3 
  printf("1 - 2.2 = %f\n", i_am_an_integer - i_am_a_float);//*-1.2 or -1 or -2
  printf("1 * 2.2 = %f\n", i_am_an_integer * i_am_a_float);// *2.2 or 2
  printf("1 / 2.2 = %f\n", i_am_an_integer / i_am_a_float);// *.45 or 0
  printf("1 / 2 = %f\n", i_am_an_integer / i_am_an_integer_too);// *.5 or 0
  
}