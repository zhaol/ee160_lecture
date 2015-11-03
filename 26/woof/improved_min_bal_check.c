/*   File:  generate_report.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "macros.h"
#include "functions.h"
#include "functions.c"

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
  int valid_account_flag = 't';
  float account_balances[MAX_NUMBER_OF_ACCOUNTS];
  int current_account_number = 0;
  char account_holder[MAX_ACCOUNT_HOLDER_SIZE]; 
  
  while (exit_program_flag == CONTINUE_PROGRAM) {
    current_account_number++;
    get_account_holder(account_holder);
    account_balance = get_account_balance();
    account_type = get_account_type();
    
    if (account_type == 's') {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, SAVINGS_ACCOUNT_MINIMUM_BALANCE);
      valid_account_flag = VALID_ACCOUNT_TYPE;
    } else if( account_type == 'c') {
      minimum_balance_fee_charged_flag = is_account_below_minimum_balance(account_balance, CHECKING_ACCOUNT_MINIMUM_BALANCE);
      valid_account_flag == VALID_ACCOUNT_TYPE;
    }  
    else{
      printf("Account type was invalid\n");
      valid_account_flag = 'g';
    }
    
    
    
/*
if (valid_account_type_flag == VALID_ACCOUNT_TYPE) {
  if (minimum_balance_fee_charged_flag) {
    // valid and min bal fee charged
    total_accounts_with_minimum_balance_fees++;
    total_minimum_balance_fees += minimum_balance_fee;
    printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", minimum_balance_fee / account_balance * PERCENT_CONVERSION_FACTOR);
    printf ("The new account balance is %.2f\n", net_balance(account_balance, minimum_balance_fee));
  } else {
    // valid and min bal fee charged not
    printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", NO_MINIMUM_BALANCE / account_balance);
    printf ("The new account balance is $%.2f\n", net_balance(account_balance, NO_MINIMUM_BALANCE));
  }
} else {
  printf ("Account type is not valid");
}

*/
    
    // Display account summary information
    if(valid_account_flag == VALID_ACCOUNT_TYPE && minimum_balance_fee_charged_flag == 0){
    printf ("=== Account Information for %s's Account ===\n", account_holder);
    //if (minimum_balance_fee_charged_flag) {
      total_accounts_with_minimum_balance_fees++;
      total_minimum_balance_fees += minimum_balance_fee;
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", minimum_balance_fee / account_balance * PERCENT_CONVERSION_FACTOR);
      printf ("The new account balance is %.2f\n", net_balance(account_balance, minimum_balance_fee));
    } else if(valid_account_flag == VALID_ACCOUNT_TYPE) { // missing check min balance fee not charged
    //} else if(valid_account_flag == VALID_ACCOUNT_TYPE && minimum_balance_fee_charged_flag != 0) { // missing check min balance fee not charged
      // valid and min bal fee charged not
      printf ("=== Account Information for %s's Account ===\n", account_holder);
      printf ("Minimum Balance Fee to Account Balance Percentage: %.1f%%\n", NO_MINIMUM_BALANCE / account_balance);
      printf ("The new account balance is $%.2f\n", net_balance(account_balance, NO_MINIMUM_BALANCE));
    }
    else{
      printf("This account is invalid.\n");
    }

    update_account_summary_information(&total_number_of_accounts, &total_amount_in_accounts, account_balance);
    account_balances[current_account_number+ARRAY_OFFSET] = account_balance;
    
    exit_program_flag = ask_to_exit();
  }
  
  output_account_summary_to_file(total_number_of_accounts, total_amount_in_accounts, total_minimum_balance_fees, total_accounts_with_minimum_balance_fees);
  output_list_of_account_balances(account_balances, total_number_of_accounts);
  
  return 0;
}