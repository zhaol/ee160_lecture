//didnt even finish bruh
#define SIZZLE_R 7
#define SIZZLE_C 13

#include <stdio.h>
main () {
  char hot_stuff[SIZZLE_R][SIZZLE_C];
  
  
  FILE* open_sesame = fopen("input.data", "r");
  
  if (open_sesame == NULL) {
    printf("Error opening file\n");
  } else {
  
  
  int counter_c=0;
  int counter_r=0;
  while (file_size!= EOF) {
    for (counter_r = 0; counter_r < SIZZLE_R; counter_r++) {
      for (counter_c = 0; counter_c < SIZZLE_C; counter_c++) {
      fscanf(open_sesame, "%c", hot_stuff[couter_c][counter_r]);
    
    counter_c++;
    
    
    if (hot_stuff[counter_r][counter_c]==0) && 
  } 
  
  }
}
