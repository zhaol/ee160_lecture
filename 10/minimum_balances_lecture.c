 #include <stdio.h>

main() {
  float account_balance;
  char account_type;
  char exit_program_flag = 'n';
  
  /*
  y if user wants to exit the program
  n if user wants to enter in more accounts
  */

  //while (exit_program_flag != 'y') {
  while (exit_program_flag == 'n') {
    printf ("Please enter the account balance:\n");
    scanf (" %f", &account_balance);
    printf ("c = checking, s = saving\n");
    printf ("Please enter the account type:\n");
    scanf (" %c", &account_type);
    
    if (account_type == 's') {
      if (account_balance < 1000) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance fee needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance fee does not need to be charged to this account.\n");
        
      }
    }
    
    /*
    ask the user if s/he wants to exit
    store the response into exit_program_flag variable
    possible places:
      before loop
      start of loop -> wrong
      middle of loop
      end of loop -> correct
      after loop
    */
    printf("Do you want to exit?\n");
    printf("Enter 'y' to exit; Enter any other character to continue\n");
    scanf(" %c", &exit_program_flag);
  }
}