#include <stdio.h>

#define MAX_CUSTOMERS 10
#define QUIT -1
#define CUSTOMER_SERVED 0

main(){
  int *first_position_in_line;
  int *last_positon_in_line;
  int customer=0;
  int line[MAX_CUSTOMERS];
  int flag=0;
  
  first_position_in_line = &line[0];
  last_positon_in_line = &line[0];
  
  do{ 
    printf("Please enter a customer number or -1 to quit:\n");
    scanf("%d", &customer);
    
    if(flag >= MAX_CUSTOMERS){
      printf(" You have reached the limit.\n");
    }
    flag++;
    
    if(customer == CUSTOMER_SERVED){
      if(first_position_in_line != last_positon_in_line){
        *first_position_in_line = -1;
        first_position_in_line++;
      }
    } 
    else{
      *last_positon_in_line = customer;
      last_positon_in_line++;
    }
    printf("\n");
    int counter =0;
    while(counter<flag){
      printf("%d, %d\n", counter, line[counter]);
      counter++;
    }
    
  }
  while(customer != QUIT);
  return 0;
}