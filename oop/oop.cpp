//This is an practice exmple of OOP in C++
//In this file, a class has been created named BankAccount
//Each Bank account has certain information associated with the account
//The information is 
//	BankAccountNumber 
//	Name
//	Balance
//	ActiveStatus
//There is certain information associated with a class such as static member variable and sttic member function 
//in this example the total number of active bank accounts is one of the example
//
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
        int accountNumber = 0;
        string name = "";
        double balance = 0.0;
        bool activeStatus = true;
        
        // Static member variable to keep track of the total active accounts
        static int totalActiveAccounts;

    public:
        // Default constructor
        BankAccount() : accountNumber(0), name(""), balance(0.0), activeStatus(false) {}

        // Constructors with initialization lists
        BankAccount(int accountNum) : accountNumber(accountNum), balance(0.0), activeStatus(true) {++totalActiveAccounts;}

        BankAccount(int accountNum, string nameHolder) : accountNumber(accountNum), name(nameHolder), balance(0.0), activeStatus(true) {++totalActiveAccounts;}

        BankAccount(int accountNum, string nameHolder, double initialDeposit)
            : accountNumber(accountNum), name(nameHolder), balance(initialDeposit), activeStatus(true) {++totalActiveAccounts;}

        BankAccount(int accountNum, string nameHolder, double initialDeposit, bool status)
            : accountNumber(accountNum), name(nameHolder), balance(initialDeposit), activeStatus(status) {
            if (status) {
                ++totalActiveAccounts;  // Increment the count of active accounts if status is true
            }
        }

        // Static member function to get total active accounts
        static int getTotalActiveAccounts() {
            return totalActiveAccounts;
        }

        // Function to print account information
        void accountInformation() const {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
            cout << "Status: " << (activeStatus ? "Active" : "Inactive") << endl;
            cout << "-------------------------" << endl;
        }

        ~BankAccount() {
            if (activeStatus) {
                --totalActiveAccounts;  // Decrement the count of active accounts when account is destroyed
                cout << "Bank account # : " << accountNumber << " has been destroyed." << endl;
            }
        }
};

// Initialize the static member variable
int BankAccount::totalActiveAccounts = 0;

int main(int argc, char const **argv) {
    BankAccount account1;
    BankAccount account2(1285);
    BankAccount account3(1286, "Fahran");
    BankAccount account4(1287, "Ammar", 100);
    BankAccount account5(1288, "Ahmad", 200, true);
    
    account1.accountInformation();
    cout << "Total Active Accounts: " << BankAccount::getTotalActiveAccounts() << endl;

    account2.accountInformation();
    cout << "Total Active Accounts: " << BankAccount::getTotalActiveAccounts() << endl;

    account3.accountInformation();
    cout << "Total Active Accounts: " << BankAccount::getTotalActiveAccounts() << endl;    

    account4.accountInformation();
    cout << "Total Active Accounts: " << BankAccount::getTotalActiveAccounts() << endl;
    
    account5.accountInformation();
    cout << "Total Active Accounts: " << BankAccount::getTotalActiveAccounts() << endl;

    return 0;
}
