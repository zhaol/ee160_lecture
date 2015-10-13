float net_balance(float account_balance, float minimum_balance_fee) {
  return(account_balance - minimum_balance_fee);
}

float get_account_balance() {
  float account_balance;  
  printf ("Please enter the account balance:\n");
  scanf ("%f", &account_balance);
  return(account_balance);
}

char get_account_type() {
  char account_type;
  printf ("c = checking, s = saving\n");
  printf ("Please enter the account type:\n");
  scanf (" %c", &account_type);
  return(account_type);
}


int is_account_below_minimum_balance(float account_balance, float minimum_balance) {
    int minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_NOT_CHARGED;
    if (account_balance < minimum_balance) {
        minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_CHARGED;
        printf ("A minimum balance fee needs to be charged to this account.\n");
    } else {
        minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_NOT_CHARGED;
        printf ("A minimum balance fee does not need to be charged to this account.\n");
    }
    return minimum_balance_fee_charged_flag;
}


void update_account_summary_information(int *total_number_of_accounts, float *total_amount_in_accounts, float account_balance) {
    
    // update "total_number_of_accounts++;" with:
    (*total_number_of_accounts)++; // *total_number_of_accounts = *total_number_of_accounts + 1;
    
    // update "total_amount_in_accounts += account_balance;" with:
    *total_amount_in_accounts += account_balance; // *total_amount_in_accounts = *total_amount_in_accounts + account_balance;
}