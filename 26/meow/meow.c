/*   File:  improved_min_bal_check.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "matsut_26_1_macros.h"
#include "matsut_26_1_helper_functions.h"
#include "matsut_26_1_helper_functions.c"

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
  char valid_account_type_flag = VALID_ACCOUNT_TYPE;
  int balances_display_counter = 1;
  
  while (exit_program_flag == CONTINUE_PROGRAM) {
    current_account_number++;
    minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_NOT_CHARGED;
    valid_account_type_flag = VALID_ACCOUNT_TYPE;
    get_account_holder(account_holder);
    account_balance = get_account_balance();
    account_type = get_account_type();
    
    if ((account_type == 's') && (account_balance < SAVINGS_ACCOUNT_MINIMUM_BALANCE)) 
    {
      minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_CHARGED;
    } 
    else if ((account_type == 'c') && (account_balance < CHECKING_ACCOUNT_MINIMUM_BALANCE)) 
    {
      minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_CHARGED;
    } 
    else if((account_type != 's') && (account_type != 'c'))
    {
      //if ((account_type != 's') && (account_type != 'c')) 
      //{
        printf ("The account type was invalid\n");
        valid_account_type_flag = INVALID_ACCOUNT_TYPE;
      //}
    }
    else if (((account_type == 's') && (account_balance > SAVINGS_ACCOUNT_MINIMUM_BALANCE)))
      {
        printf ("A minimum balance fee does not need to be charged to this account\n");
      }
    else if (((account_type == 'c') && (account_balance > CHECKING_ACCOUNT_MINIMUM_BALANCE)))
      {
        printf ("A minimum balance fee does not need to be charged to this account\n");
      }
          
    
    if (valid_account_type_flag == VALID_ACCOUNT_TYPE && minimum_balance_fee_charged_flag == MINIMUM_BALANCE_FEE_CHARGED) 
    {
      // Display account summary information
      printf ("=== Account Information for %s's Account ===\n", account_holder);
      //if (minimum_balance_fee_charged_flag) {
        total_accounts_with_minimum_balance_fees++;
        total_minimum_balance_fees += minimum_balance_fee;
        printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", minimum_balance_fee / account_balance * PERCENT_CONVERSION_FACTOR);
        printf ("The new account balance is %.2f\n", net_balance(account_balance, minimum_balance_fee));
    }
      else if (valid_account_type_flag == VALID_ACCOUNT_TYPE && minimum_balance_fee_charged_flag == MINIMUM_BALANCE_FEE_NOT_CHARGED)
      {
        printf ("=== Account Information for %s's Account ===\n", account_holder);
        printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", NO_MINIMUM_BALANCE / account_balance);
        printf ("The new account balance is $%.2f\n", net_balance(account_balance, NO_MINIMUM_BALANCE));
      }
      
      update_account_summary_information(&total_number_of_accounts, &total_amount_in_accounts, account_balance);
      account_balances[current_account_number+ARRAY_OFFSET] = account_balance;
    
    
    exit_program_flag = ask_to_exit();
  }
  
  printf("Do you want to:\n(enter f) to output to file\n(enter s) to output to screen\n(enter n) to output nothing\n");
  char output;
  scanf(" %c",&output);
  switch (output)
  {
      case 'f':
          output_account_summary_to_file(total_number_of_accounts, total_amount_in_accounts, total_minimum_balance_fees, total_accounts_with_minimum_balance_fees);
          output_list_of_account_balances(account_balances, total_number_of_accounts);
            break;
      case 's':
            
             printf ("==== Accounts Summary ====\n");
            printf ("The total number of accounts: %d\n", total_number_of_accounts);
            printf ("The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
            printf ("The percentage of the total minimum balance fees with respect to the total account balances: %.1f%%\n", total_minimum_balance_fees / total_amount_in_accounts * PERCENT_CONVERSION_FACTOR);
            printf ("The percentage of accounts that were charged a minimum balance fee: %.1f%%\n", PERCENT_CONVERSION_FACTOR * total_accounts_with_minimum_balance_fees / total_number_of_accounts);  
              printf ("==== List of Account Balances ====\n");
              while (balances_display_counter <= total_number_of_accounts) {
            printf ("%3d: $%8.2f\n", balances_display_counter, account_balances[balances_display_counter+ARRAY_OFFSET]);
             balances_display_counter++;
              }
     break;
     case 'n':
     break;
     default:
     break;
  }
       
  
  return 0;
}