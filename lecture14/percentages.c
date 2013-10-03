#include <stdio.h>

/*
while there are more accounts to be checked
  check if the account is a saving account
    when yes, then
      check if the account balance is less than $1000
        when yes, then
          tell the teller to charge the minimum balance fee
          //update minimum_balance_fee_charged
        otherwise,
          tell the teller to not charge the minimum balance fee
    otherwise, (assume) the account is a checking account
      check if the account balance is less than $500
        when yes, then
          tell the teller to charge the minimum balance fee
          //update minimum_balance_fee_charged
        otherwise
          tell the teller to not charge the minimum balance fee
  update accounts summary information
  ask the user if there are more accounts to be checked
display accounts summary information
*/

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  float total_amount_in_accounts = 0;
  
  int total_number_of_accounts = 0;
  int total_number_of_minimum_balance_fee_charged = 0;
  
  
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
          
    if (account_type == 's') {
      if (account_balance < 1000) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
        total_number_of_minimum_balance_fee_charged++;
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
        total_number_of_minimum_balance_fee_charged++;
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
  printf ("Total accounts below minimum balance fee: %d\n", total_number_of_minimum_balance_fee_charged);
  printf ("The percentage of total accounts below minimum balance fee relative to total number of accounts: %.1f%%\n", (float) 100 * total_number_of_minimum_balance_fee_charged / total_number_of_accounts);
}