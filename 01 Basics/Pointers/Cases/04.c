// Case 4: Pointer Arithmetics

#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 10;
  int *arr = (int *)malloc(length * sizeof(int));

  for (int i = 0; i < length; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < length; i++) {
    printf("%d\n", arr[0]);
    arr ++;
  }
  return 0;
}