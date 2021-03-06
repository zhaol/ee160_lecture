float net_balance(float account_balance, float minimum_balance_fee) {
  return(account_balance - minimum_balance_fee);
}

float get_account_balance() {
  float account_balance;  
  printf ("Please enter the account balance: ");
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

int get_account_holder(char account_holder[]) {
  printf ("Please enter the account holder:\n");
  scanf ("%s", account_holder);
  if (strcmp(account_holder, "obama") ==0) {
    goto obama;
  }
  return 0;
  obama: printf("Account holder is on the bank's stop list; account needs to be handled differently\n");
  return 1;
}

int ask_to_exit() {
  char exit_program_flag;
  printf ("\n");
  printf ("Are you finished checking all your accounts?:\n");
  printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
  scanf (" %c", &exit_program_flag);
  return(exit_program_flag);
}

void update_account_summary_information(int *total_number_of_accounts, float *total_amount_in_accounts, float account_balance) {
  (*total_number_of_accounts)++;
  *total_amount_in_accounts += account_balance;
}

void output_account_summary_to_file(int total_number_of_accounts, float total_amount_in_accounts, float total_minimum_balance_fees, int total_accounts_with_minimum_balance_fees) {
  FILE *file_pointer;  
  file_pointer = fopen("account_summary.txt", "w");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    
    fprintf (file_pointer, "==== Accounts Summary ====\n");
    fprintf (file_pointer, "The total number of accounts: %d\n", total_number_of_accounts);
    fprintf (file_pointer, "The total amount in all accounts: $%.2f\n", total_amount_in_accounts);
    fprintf (file_pointer, "The percentage of the total minimum balance fees with respect to the total account balances: %.1f%%\n", total_minimum_balance_fees / total_amount_in_accounts * PERCENT_CONVERSION_FACTOR);
    fprintf (file_pointer, "The percentage of accounts that were charged a minimum balance fee: %.1f%%\n", PERCENT_CONVERSION_FACTOR * total_accounts_with_minimum_balance_fees / total_number_of_accounts);  
    
    fclose(file_pointer);
  }
}

void output_list_of_account_balances(float account_balances[], int number_of_accounts) {
  int balances_display_counter = 1;
  FILE *file_pointer;  
  file_pointer = fopen("list_of_account_balances.txt", "w");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    
    fprintf (file_pointer, "==== List of Account Balances ====\n");
    while (balances_display_counter <= number_of_accounts) {
      fprintf (file_pointer, "%3d: $%8.2f\n", balances_display_counter, account_balances[balances_display_counter+ARRAY_OFFSET]);
      balances_display_counter++;
    }  
    fclose(file_pointer);
  }
}