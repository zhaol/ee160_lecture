#include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  int total_number_of_accounts = 0;
  float total_amount_in_accounts = 0;
  float total_minimum_balance_fees = 0;
  int minimum_balance_total = 0;
  
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance:\n");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
      
    if (account_type == 's') {
      if (account_balance < 1000) {
        minimum_balance_total++;
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        minimum_balance_total++;
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
  
  // Display accounts summary information
  printf ("==== Accounts Summary ====\n");
  printf ("The total number of accounts: %d\n", total_number_of_accounts);
  printf ("The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
printf("The percent of accounts charged a minimum balance fee to total accounts: %d\n", minimum_balance_total / total_number_of_accounts);
printf("The percent of amount charged to total amount in all accounts: %.2f\n", total_minimum_balance_fees / total_amount_in_accounts);
  
}