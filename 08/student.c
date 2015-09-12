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
    
    printf("account balance: %f\n", account_balance);
    printf("account type: %c\n", account_type);
    
//check if the account is a saving account
    if (account_type == 's') {
        if(account_balance <= 1000){
        printf("Charge minimum balance fee\n");
        //account_balance = account_balance - minimum_balance fee?;
        }
    }
//  if yes, then
//    check if the account balance is less than $1000
//      if yes, then
//        tell the teller to charge the minimum balance fee
//      otherwise
//        tell the teller to not charge the minimum balance fee
//  otherwise (assume) the account is a checking account
//    check if the account balance is less than $500
//      if yes, then
//        tell the teller to charge the minimum balance fee
//      otherwise
//        tell the teller to not charge the minimum balance fee
    
    if
}