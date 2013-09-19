/*
while user wants to continue program
  check if the account is a saving account
    if yes, then
      check if the account balance is less than $1000
        if yes, then
          tell the teller to charge the minimum balance fee
        otherwise
          tell the teller to not charge the minimum balance fee
    otherwise (assume) the account is a checking account
      check if the account balance is less than $500
        if yes, then
          tell the teller to charge the minimum balance fee
        otherwise
          tell the teller to not charge the minimum balance fee
  ask user if s/he wants to continue program
*/

#include <stdio.h>

main () {
  char continue_flag = 'n';  
  float account_balance;
  char account_type;
  
  while (continue_flag != 'y') {
    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
      
    if (account_type == 's') {
      if (account_balance < 1000) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    }
    
    printf("Do you want to exit?\n");
    scanf(" %c", &continue_flag);
  }
}