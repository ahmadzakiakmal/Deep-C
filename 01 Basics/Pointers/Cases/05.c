// Case 5: Function Pointers

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
  return a + b;
}

int substract(int a, int b) {
  return a - b;
}

int divide(int a, int b) {
  return a / b;
}

int multiply(int a, int b) {
  return a * b;
}

int main() {
  // A pointer towards a function, the signature must be declared
  int (*functionToExecute)(int, int);

  int operator;
  int a;
  int b;
  printf("Pass the arguments in order: operator, operand 1, operand 2\n");
  printf("Operators:\n1 = add\n2 = substract\n3 = multiply\n4 = divide\n>> ");
  scanf("%d %d %d", &operator, &a, &b);

  // We can assign the desired function to where the pointer points toward
  switch (operator) {
    case 1:
      functionToExecute = add;
      break;
    case 2:
      functionToExecute = substract;
      break;
    case 3:
      functionToExecute = multiply;
      break;
    case 4:
      functionToExecute = divide;
      break;
    default: 
      printf("Operator must be 1, 2, 3, or  4");
      return 1;
  }

  // Here we can always call the same pointer function
  // This reduces redundant code compared to calling 
  // each operator function in their if-else or switch block
  int result = functionToExecute(a, b);
  printf("%d", result);

  return 0;
}