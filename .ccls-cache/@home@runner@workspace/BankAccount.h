// BankAccount.h

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount {
public:
    // Data members
    int accountBalance;
    int accountNumber;

    // Member functions
    void deposit(int amount);
    void withdraw(int amount);
};

#endif
