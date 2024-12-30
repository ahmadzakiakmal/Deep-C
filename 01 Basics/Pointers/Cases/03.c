// Case 3: Enabling dynamic-sized variables

#include <stdio.h>
#include <stdlib.h>

void modifyArray(int *dynamicArray, int index, int value) {
  dynamicArray[index] = value;
  return;
}

int main() {
  int length = 0;
  printf("Input the length of the array: ");
  scanf("%d", &length);

  if(length == 0) {
    printf("Why would you want the length to be 0?");
    return 1;
  }

  if(length < 0) {
    printf("Length cannot be negative");
    return 1;
  }

  int *dynamicArray = (int *)malloc(length * sizeof(int));
  if (dynamicArray == NULL) {
    printf("Memory allocation failed");
    return 1;
  } 
  printf("Memory allocated for an array with length %d\n", length);
  printf("\n");

  for(int i = 0; i < length; i++) {
    int tempValue = 0;
    printf("Enter element for index [%d]: ", i);
    scanf("%d", &tempValue);
    modifyArray(dynamicArray, i, tempValue);
  }

  printf("\nHere's the dynamic array you took for granted in modern languages:\n");
  printf("[");
  for (int i = 0; i < length; i++) {
    printf("%d", dynamicArray[i]);
    if (i != length - 1) {
      printf(", ");
    }
  }
  printf("]");
  free(dynamicArray);

  return 0;
}