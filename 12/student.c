#include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  int total_number_below_min = 0;
  int total_number_of_accounts = 0;
  float total_amount_in_all_accounts = 0;
  
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
      
    if (account_type == 's') {
      if (account_balance < 1000) {
        total_number_below_min ++;
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        total_number_below_min ++;
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    }  
    total_number_of_accounts = total_number_of_accounts + 1;
    total_amount_in_all_accounts += account_balance;
    
    
    
    printf ("\n");
    printf ("Are you finished checking all your accounts?:\n");
    printf ("Enter 'n' to check more accounts; Enter any other character to exit\n");
    scanf (" %c", &exit_program_flag);
  }
  
  total_number_below_min = total_number_below_min * 20;
  printf("total_number_of_accounts: %d\n", total_number_of_accounts);
  printf("total_amount_in_all_accounts: %d\n", total_amount_in_all_accounts);
  printf ("Fee charged is %d\n", total_number_below_min);
}