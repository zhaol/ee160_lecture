#include <stdio.h>

main() {
  int counter;

  counter = 0;
  while (counter < 3) {
    printf ("Hip, hip, hooray!\n");
    if (counter == 2) {
      printf ("That was the last cheer. :(\n");
    }
    counter = counter + 1;
  }
}