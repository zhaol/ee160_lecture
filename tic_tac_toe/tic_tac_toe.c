//https://docs.google.com/document/d/1LghQc3uNgrd6o7h-U0R7Gh6cjrpz-E3BYRev_tKKs-M/pub

#include <stdio.h>
#include "magic_numbers.h"
#include "helpers.h"
#include "helpers.c"

int main () {
  int winner_found = WINNER_NOT_FOUND;
  int total_number_of_turns = 0;
  char positions[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  
  /*
  int counter;
  for(counter = 0; counter <= 9; counter++) {
    printf("position: %c", positions[counter]);
  }  
  */
  
  do {
    ask_player_for_move(total_number_of_turns % 2);
    winner_found = check_for_winner();
    
    total_number_of_turns++;
  } while (winner_found == WINNER_NOT_FOUND);
  
  return 0;
}