#include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  int total_number_of_accounts = 0;
  float total_amount_in_accounts = 0;
  int number_of_accounts_below_min = 0;
  //float minimum_balance_total = 0;// dollar value of minimum balance fees or number of accounts below minimum -> no_of_accts * 20
  
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance:\n");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
      
    if (account_type == 's') {
      if (account_balance < 1000) {
        // account is below min balance
        number_of_accounts_below_min++;
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        // account is below min balance
        number_of_accounts_below_min++;
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    }  
    
    // Update account summary information
    total_number_of_accounts++;
    total_amount_in_accounts += account_balance;
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);
  }
  
  /*after each account
 the percentage the minimum balance fee is relative to the account balance. 
  */
  
  // Display accounts summary information
  printf ("==== Accounts Summary ====\n");
  printf ("The total number of accounts: %d\n", total_number_of_accounts);
  printf ("The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
  printf ("The percentage of minimum balance fees relative to the total amount in all accounts: %.2f%%\n", number_of_accounts_below_min*20/total_amount_in_accounts*100);
  printf ("The percentage of accounts that were charged a minimum balance fee: %.2f%%\n", (float) number_of_accounts_below_min / total_number_of_accounts * 100.0);
  
  /* summary
 the percentage of accounts that were charged a minimum balance fee.
 number_of_accounts_below_min / total_number_of_accounts
  */
  
}
