/*
reads in account type
reads in account balance

check if the account is a saving account
  if yes, then
    check if the account balance is less than $1000
      if yes, then
        tell the teller to charge the minimum balance fee
      otherwise
        tell the teller to not charge the minimum balance fee
  otherwise (assume) the account is a checking account
    check if the account balance is less than $500
      if yes, then
        tell the teller to charge the minimum balance fee
      otherwise
        tell the teller to not charge the minimum balance fee
*/
        
#include <stdio.h>

main() {
    float account_balance; // $511.11 float
    char account_type; // char c or s
    
    //reads in account type
    printf("Please enter account balance:\n");
    scanf(" %f", &account_balance);
    //reads in account balance   
    printf("Please enter c for checking or s for savings:\n");
    scanf(" %c", &account_type);
    
    //check if the account is a saving account
    if(account_type == 's') {
    //check if the account balance is less than $1000
        if(account_balance < 1000){
            // savings account is below minimum balance
            printf("Please charge minimum balance fee\n");
            printf("You broke\n");
            // add it here
            /*
            declare another variable (char)
            scan in y or n
            if y
                printf("closing balance: %f\n", account_balance - 20);
            */
        } else {
            // savings account is above minimum balance
            printf("Please do not charge minimum balance fee\n");
        }
    } else {
        // account is checking
        if(account_balance < 500){
            // checking account is below minimum balance
            printf("Please charge minimum balance fee\n");
            printf("You really broke\n");
            // add it here
        } else {
            // checking account is above minimum balance
            printf("Please do not charge minimum balance fee\n");
        }
    }
}

/*ask the user if s/he wants to print out the account balance after applying minimum balance fee for this account
        print out closing balance

*/