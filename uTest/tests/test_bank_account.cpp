// tests/test_bank_account.cpp
#include <gtest/gtest.h>
#include "BankAccount.h"

class BankAccountTest : public ::testing::Test {
protected:
    BankAccount *account;

    // Setup before each test
    void SetUp() override {
        account = new BankAccount(100.0); // Start with a balance of 100.0
    }

    // Teardown after each test
    void TearDown() override {
        delete account;
    }
};

TEST_F(BankAccountTest, InitialBalance) {
    EXPECT_EQ(account->getBalance(), 100.0);
}

TEST_F(BankAccountTest, DepositFunds) {
    account->deposit(50.0);
    EXPECT_EQ(account->getBalance(), 150.0);
}

TEST_F(BankAccountTest, WithdrawFunds) {
    account->withdraw(30.0);
    EXPECT_EQ(account->getBalance(), 70.0);
}

TEST_F(BankAccountTest, WithdrawInsufficientFunds) {
    EXPECT_THROW(account->withdraw(200.0), std::invalid_argument);
}

TEST_F(BankAccountTest, TransferFunds) {
    BankAccount targetAccount(50.0);
    account->transfer(targetAccount, 40.0);
    EXPECT_EQ(account->getBalance(), 60.0);
    EXPECT_EQ(targetAccount.getBalance(), 90.0);
}

TEST_F(BankAccountTest, NegativeDeposit) {
    EXPECT_THROW(account->deposit(-10.0), std::invalid_argument);
}

TEST_F(BankAccountTest, NegativeWithdrawal) {
    EXPECT_THROW(account->withdraw(-10.0), std::invalid_argument);
}

TEST_F(BankAccountTest, ZeroDeposit) {
    EXPECT_THROW(account->deposit(0.0), std::invalid_argument);
}

TEST_F(BankAccountTest, ZeroWithdrawal) {
    EXPECT_THROW(account->withdraw(0.0), std::invalid_argument);
}

class ParameterizedBankAccountTest : public ::testing::TestWithParam<double> {
protected:
    BankAccount *account;

    void SetUp() override {
        account = new BankAccount(100.0);
    }

    void TearDown() override {
        delete account;
    }
};

// Test using parameterized values
TEST_P(ParameterizedBankAccountTest, WithdrawValidAmount) {
    double amount = GetParam();
    account->withdraw(amount);
    EXPECT_EQ(account->getBalance(), 100.0 - amount);
}

// Define test parameters
INSTANTIATE_TEST_SUITE_P(ValidWithdrawals, ParameterizedBankAccountTest, ::testing::Values(10.0, 20.0, 50.0, 99.99));

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
