#include "BankAccount.h"
#include <iostream>

int main() {

  BankAccount account1;
  account1.accountNumber = 1234;
  account1.accountBalance = 1000;

  std::cout << "Account Number: " << account1.accountNumber << std::endl;
  std::cout << "Account Balance: " << account1.accountBalance << std::endl;

  account1.deposit(1000.0);

  std::cout << "Account Balance: " << account1.accountBalance << std::endl;

  account1.withdraw(2000);

  std::cout << "Account Balance: " << account1.accountBalance << std::endl;

  return 0;
}