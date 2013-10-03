#include <stdio.h>

main() {
  int total_number_of_accounts = 3;
  int total_number_of_minimum_balance_fee_charged = 2;
  
  printf ("The percentage of total accounts below minimum balance fee relative to total number of accounts: %.1f%%\n", 100.0 * total_number_of_minimum_balance_fee_charged / total_number_of_accounts);
}