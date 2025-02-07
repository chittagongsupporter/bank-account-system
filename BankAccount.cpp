// BankAccount.cpp

#include "BankAccount.h"

// Function to deposit money into the account
void BankAccount::deposit(int amount) { accountBalance += amount; }

// Function to withdraw money from the account
void BankAccount::withdraw(int amount) { accountBalance -= amount; }
