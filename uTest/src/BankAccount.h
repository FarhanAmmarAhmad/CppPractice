// src/BankAccount.h
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <stdexcept>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) : balance(initial_balance) {
        if (initial_balance < 0) {
            throw std::invalid_argument("Initial balance cannot be negative");
        }
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Deposit amount must be positive");
        }
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Withdrawal amount must be positive");
        }
        if (amount > balance) {
            throw std::invalid_argument("Insufficient funds");
        }
        balance -= amount;
    }

    void transfer(BankAccount &to, double amount) {
        withdraw(amount);
        to.deposit(amount);
    }
};

#endif

