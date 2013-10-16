check_for_savings_or_checking_and_if_below_minimum()
vs
// check for savings or checking and if below minimum balance
if (account_type == 's') {
  // check if below minimum balance
  if (account_balance < 1000) {
    // 1 means something
    minimum_balance_fee_charged_flag = 1;
    printf ("A minimum balance fee needs to be charged to this account.\n");
  } else {
    minimum_balance_fee_charged_flag = 0;
    printf ("A minimum balance fee does not need to be charged to this account.\n");
  }
} else {
  // check if below minimum balance
  if (account_balance < 500) {
    minimum_balance_fee_charged_flag = 1;
    printf ("A minimum balance fee needs to be charged to this account.\n");
  } else {
    minimum_balance_fee_charged_flag = 0;
    printf ("A minimum balance fee does not need to be charged to this account.\n");
  }
}

