#include <stdio.h>

main() {
  int counter;

  counter = 1;
  while (counter <= 3) {
    printf ("Hip, hip, horay!\n");
    if (counter == 3) {
      printf ("That was the last cheer. :(\n");
    }
    counter = counter + 1;
  }
}