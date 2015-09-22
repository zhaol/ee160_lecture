#include <stdio.h>

/* global variables */

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  
  // total number of above minimum balance accounts
  // int tmba = 0; 
  //int tot_min_bal_acct = 0; 
  int total_number_of_above_min_balance_accounts = 0;
  
  int total_number_of_accounts = 0; // above min bal + below min bal
  float total_amount_in_all_accounts = 0;
  
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
        total_number_of_above_min_balance_accounts++;
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        total_number_of_above_min_balance_accounts++;
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    }  
    
    /* update total_number_of_accounts */
    // total_number_of_accounts++;
    total_number_of_accounts = total_number_of_accounts + 1;
    
    // total_amount_in_all_accounts += totaaccount_balance;
    total_amount_in_all_accounts = total_amount_in_all_accounts + account_balance;
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);
  }
  
  /* display:
    total number of accounts
    total amount in all accounts
  */
  printf("total_number_of_accounts: %d\n", total_number_of_accounts);
  printf("total_amount_in_all_accounts: %.2f\n", total_amount_in_all_accounts);
  printf("total number of accounts in good standing: %d\n",  total_number_of_above_min_balance_accounts);
}
