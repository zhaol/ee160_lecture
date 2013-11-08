#include <stdio.h>

#define VALID_ACCOUNT_TYPE 1

int main () {
  int valid_account_type_flag = 1;
  int minimum_balance_charged_flag = 0;
  
  if ((valid_account_type_flag) && (minimum_balance_charged_flag)) {
    printf("branch 1\n");
    printf ("account type flag = %d\n", valid_account_type_flag);
    printf ("minimum balance charged flag: %d\n", minimum_balance_charged_flag);
  } else if ((valid_account_type_flag) && (minimum_balance_charged_flag == 0 )) {
    printf("branch 2\n");
    printf ("account type flag = %d\n", valid_account_type_flag);
    printf ("minimum balance charged flag: %d\n", minimum_balance_charged_flag);
  } else {
    printf("branch 3\n");
    printf ("Account type is not valid");
  }
  return 0;
}