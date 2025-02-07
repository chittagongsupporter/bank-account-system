#include <iostream>

// define a class named 'BankAccount'
class BankAccount {
public:
  // data members
  int accountBalance;
  int accountNumber;

  // member functions
  void deposit(int amount) { accountBalance += amount; }
  void withdraw(int amount) { accountBalance -= amount; }
};

int main() {

  return 0;
}