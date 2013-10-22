//int variable1 = 1; //global
//int variable2 = 2; //global
main() {
  int variable1 = 1;
  int variable2 = 2;
  
  function1(&variable1, &variable2); //pass by reference
  variable3 = function2(variable1, variable2); //pass by value
  
  variable1;
  variable2;
}

function1() {
  *variable1 = 2;
  *variable2 = 1;
}

function2() {
  
  return value;
}