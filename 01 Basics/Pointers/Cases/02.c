// Case 2: Modifying variables outside of scope

#include <stdio.h>

// a function to increment with pointer as argument
void increment(int *value, int incrementValue) {
  *value += incrementValue;
  return;
}

int main() {
  int value = 0;
  // value is incremented by an external function via the pointer
  increment(&value, 5);
  printf("%d", value); // the value is now modified
  return 0;
}