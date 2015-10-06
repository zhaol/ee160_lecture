#include <stdio.h>

#define count_till(n) int count = 0;            \
                      while (count <= n) {      \
                        printf("%d\n", count);  \
                        count++;                \
                      }                         \

main() {
  int max_count = 5;
  
  count_till(5);
  
  //while (count <= n) {
  //  printf("%d\n", count);
  //  count++;
  //}
}