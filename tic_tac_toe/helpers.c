void ask_player_for_move(int player_number) {
  if (player_number == 0) {
    printf("Please enter position for X\n");
    // placing X in position array
  } else {
    printf("Please enter position for O\n");
    // placing O in position array
  }
}

int check_for_winner() {
  // check rows
  // check columns
  // check diagonals
  return WINNER_NOT_FOUND;
}