/*
while there are more accounts to be checked
  check if the account is a saving account
    when yes, then
      check if the account balance is less than $1000
        when yes, then
          tell the teller to charge the minimum balance fee
        otherwise
          tell the teller to not charge the minimum balance fee
  otherwise (assume) the account is a checking account
    check if the account balance is less than $500
      when yes, then
        tell the teller to charge the minimum balance fee
      otherwise
        tell the teller to not charge the minimum balance fee
  ask the user if there are more accounts to be checked
  update total number of accounts and total amount of all accounts
display total number of accounts and total amount of all accounts
*/

#include <stdio.h>

main () {
  ////////
  int total_number_of_accounts = 0;
  double total_amount_of_all_accounts = 0;
  ///////
  
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  
  while (exit_program_flag == 'n') {  
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
    
    //////
    //update total number of accounts and total amount of all accounts
    total_number_of_accounts = total_number_of_accounts + 1;
    total_amount_of_all_accounts = total_amount_of_all_accounts + account_balance;
    /////
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);  
  }
  
  /////////
  //display total number of accounts and total amount of all accounts
  printf("Total number of accounts:\n", total_number_of_accounts);
  printf("Total amount of all accounts:\n", total_amount_of_all_accounts);
  ///////
}