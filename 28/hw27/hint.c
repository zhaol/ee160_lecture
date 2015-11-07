// @hint 
// HW 27 Problem 1

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#define QUIT 'q'

// This program compares using a do while loop with a while loop
main(){
    char input[MAX];
    int number_of_loop;
    int counter;

  do{
    printf("Please enter a number to count or 'q' to quit:\n");
    scanf("%s", input);
    number_of_loop = atoi(input);
    
    if(input[0]>='a'&&input[0]<='z'){
      if(input[0]!=QUIT){
        printf("Please enter a valid entry\n");  
      }
    }
    else{
      for(counter=0; number_of_loop>=counter; counter++){
        printf("counting: %d\n", counter);
      }
    }
  } while(input[0] != QUIT);
  printf("Quitting...\n");
}