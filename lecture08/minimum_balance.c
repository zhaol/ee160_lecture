#include <stdio.h>

main () {
  char account_type;
  float account_balance;
  
  printf("c = checking account, s = savings account:\n");
  printf("Please enter account type:\n");
  scanf("%c", &account_type);
  printf("Please enter account balance:\n");
  scanf("%f", &account_balance);
  
  if (account_type == 's') {
    if (account_balance < 1000) {
      printf("charge minimum balance\n");
    } else {
      printf("do not charge minimum balance\n");
    }
  } else {
    if (account_balance < 500) {
      printf("charge minimum balance\n");
    } else {
      printf("do not charge minimum balance\n");
    }
  }
}