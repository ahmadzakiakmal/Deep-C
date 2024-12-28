#include <stdio.h>

int main(int argc, char *argv[]) {
  int currentValue = 42;
  int *ptrCurrentValue = &currentValue;
  // the value stored within the memory address
  printf("Value: %d\n", * ptrCurrentValue);

  // the memory address the pointer points toward
  printf("Memory address: %p\n", ptrCurrentValue);

  // casting back into integer
  printf("Int casted: %p\n", (int *) ptrCurrentValue); 
  // the value after being casted
  printf("Int casted: %d\n", * (int *) ptrCurrentValue); 

  // casting to void pointer as the standard %p type
  printf("Void casted: %p\n", (void *) ptrCurrentValue); 
  // the value after being casted 
  // it cannot be directly casted from void*, void* only acts as the generic type for pointers)
  printf("Void value: %d", * (int *) (void *) ptrCurrentValue);

  return 0;
}