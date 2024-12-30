// Case 4: Pointer Arithmetics

#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 10;
  int *arr = (int *)malloc(length * sizeof(int));

  for (int i = 0; i < length; i++) {
    arr[i] = i;
  }

  // Here the array is iterated not by the for loop index,
  // but by incrementing the pointer
  // this works because the pointer shifts and points to the next element in the array
  for (int i = 0; i < length; i++) {
    printf("%d\n", arr[0]);
    arr ++;
  }
  return 0;
}