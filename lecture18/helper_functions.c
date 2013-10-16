float get_account_balance() {
  float account_balance;
  printf ("Please enter the account balance: ");
  scanf ("%f", &account_balance);
  return account_balance;  
}

void get_account_type(char* account_type_pointer) {
  printf ("c = checking, s = saving\n");
  printf ("Please enter the account type:\n");
  scanf (" %c", account_type_pointer);
}

int checking_if_account_is_below(float account_balance, int minimum_balance) {
  int minimum_balance_fee_charged_flag;
  
  if (account_balance < minimum_balance) {
    minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_IS_CHARGED;
    printf ("A minimum balance fee needs to be charged to this account.\n");
  } else {
    minimum_balance_fee_charged_flag = MINIMUM_BALANCE_FEE_IS_NOT_CHARGED;
    printf ("A minimum balance fee does not need to be charged to this account.\n");
  }
  return minimum_balance_fee_charged_flag;
}




