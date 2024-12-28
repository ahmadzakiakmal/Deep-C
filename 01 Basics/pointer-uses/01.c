// case 01: Avoid copying large values

#include <stdio.h>

typedef struct {
  char name[50];
  int age;
  float weight;
} User;

// This function only receives the memory where the user is stored 
// instead of the whole struct being copied to it
void showUser(User *user) {
  printf("Name:\t%s\nAge:\t%d\nWeight:\t%f\n", user->name, user->age, user->weight);
}

int main() {
  User user1 = {"Zaki", 22, 85.2};
  // Call the function passing the memory address
  showUser(&user1);

  return 0;
}