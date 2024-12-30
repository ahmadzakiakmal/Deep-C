#include <stdio.h>

int main(int argc, char *argv[]) {
  int currentValue = 42;
  int *ptrCurrentValue = &currentValue;
  // the value stored within the memory address
  printf("Value: %d\n", * ptrCurrentValue);

  // the memory address the pointer points toward
  printf("Memory address: %p\n", ptrCurrentValue);
  
  // casting to void pointer as the standard %p type
  printf("Void casted: %p\n", (void *) ptrCurrentValue); 

  // pointers cannot be directly derefenced from void*, 
  // void* only acts as the generic type for pointers)
  printf("Void value: %d", * (int *) (void *) ptrCurrentValue);

  return 0;
}