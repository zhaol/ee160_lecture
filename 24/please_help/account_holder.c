/*   File:  account_holder.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "maros.h"
#include "functions.h"
#include "functions.c"

//void write_balances_file(float account_balances[], int number_of_accounts) {
void write_balances_file(FILE *balances_file, float account_balances[], int number_of_accounts) {
  //FILE *balances_file;
  //balances_file = fopen("balances.output", "w");
  
  int balances_display_counter = 1;
  fprintf (balances_file, "==== List of Account Balances ====\n");
  while (balances_display_counter <= number_of_accounts) {
    fprintf (balances_file, "%3d: $%8.2f\n", balances_display_counter, account_balances[balances_display_counter+ARRAY_OFFSET]);
    balances_display_counter++;
  }
  
  //fclose(balances_file);
}


// This program allows a teller to enter in account details and the program will calculate account information for the teller
int main() {
  float account_balance;
  char account_type;
  char exit_program_flag = CONTINUE_PROGRAM;
  int total_number_of_accounts = 0;
  float total_amount_in_accounts = 0;
  int minimum_balance_fee = 35;
  int total_minimum_balance_fees = 0;
  int total_accounts_with_minimum_balance_fees = 0;
  int minimum_balance_fee_charged_flag = 0;
  float account_balances[MAX_NUMBER_OF_ACCOUNTS];
  int current_account_number = 0;
  char account_holder[MAX_ACCOUNT_HOLDER_SIZE]; 
  
  // declare file pointer
  FILE *summary_file;
  FILE *balances_file;
  balances_file = fopen("balances.output", "w");
  
  while (exit_program_flag == CONTINUE_PROGRAM) {
    current_account_number++;
    
    // get account holder information
    printf ("Please enter the account holder:\n");
    scanf ("%s", account_holder);
    
    account_balance = get_account_balance();
    account_type = get_account_type();
    
    if (account_type == 's') {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, SAVINGS_ACCOUNT_MINIMUM_BALANCE);
    } else {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, CHECKING_ACCOUNT_MINIMUM_BALANCE);
    }  
    
    // Display account summary information
    printf ("=== Account Information for %s's Account ===\n", account_holder);
    if (minimum_balance_fee_charged_flag) {
      total_accounts_with_minimum_balance_fees++;
      total_minimum_balance_fees += minimum_balance_fee;
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", minimum_balance_fee / account_balance * PERCENT_CONVERSION_FACTOR);
      printf ("The new account balance is %.2f\n", net_balance(account_balance, minimum_balance_fee));
    } else {
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", NO_MINIMUM_BALANCE / account_balance);
      printf ("The new account balance is $%.2f\n", net_balance(account_balance, NO_MINIMUM_BALANCE));
    }
    
    update_account_summary_information(&total_number_of_accounts, &total_amount_in_accounts, account_balance);
    account_balances[current_account_number+ARRAY_OFFSET] = account_balance;
    
    exit_program_flag = ask_to_exit();
  }
  
  // open a file for writing and set it to the pointer
  summary_file = fopen("summary.output", "w");
  
  // Display accounts summary information
  fprintf (summary_file, "==== Accounts Summary ====\n");
  fprintf (summary_file, "The total number of accounts: %d\n", total_number_of_accounts);
  fprintf (summary_file, "The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
  fprintf (summary_file, "The percentage of the total minimum balance fees with respect to the total account balances: %.1f%%\n", total_minimum_balance_fees / total_amount_in_accounts * PERCENT_CONVERSION_FACTOR);
  fprintf (summary_file, "The percentage of accounts that were charged a minimum balance fee: %.1f%%\n", PERCENT_CONVERSION_FACTOR * total_accounts_with_minimum_balance_fees / total_number_of_accounts);
  
  // closing the file pointer
  fclose(summary_file);
  
  write_balances_file(balances_file, account_balances, current_account_number);
  //write_balances_file(account_balances, current_account_number);
  fclose(balances_file);
  
  return 0;
}
