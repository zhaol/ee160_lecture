while there are more accounts to be checked
  check if the account is a saving account
    when yes, then
      check if the account balance is less than $1000
        when yes, then
          tell the teller to charge the minimum balance fee
        otherwise
          tell the teller to not charge the minimum balance fee
          update good account total
    otherwise (assume) the account is a checking account
      check if the account balance is less than $500
        when yes, then
          tell the teller to charge the minimum balance fee
        otherwise
          tell the teller to not charge the minimum balance fee
          update good account total
  ask the user if there are more accounts to be checked
  update total number of accounts and total amount of all accounts
display total number of accounts and total amount of all accounts
display good account total