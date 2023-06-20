#include <iostream>
#include <string>


struct BankAccount
{
    int account_number{};
    std::string holder_name{};
    double account_balance{};
};


void updateAccountBalance(BankAccount &account, double balance)
{
    account.account_balance = balance;
}


void printAccountDetails(BankAccount &account)
{
    std::cout << "You account details: "
        << account.holder_name << ", "
        << account.account_number << ", "
        << account.account_balance << std::endl;
}


int main()
{
    BankAccount account;

    std::cout << "Input account number: ";
    std::cin >> account.account_number;
    std::cin.get();

    std::cout << "Input holder name: ";
    std::getline(std::cin, account.holder_name);

    std::cout << "Input current balance: ";
    std::cin >> account.account_balance;

    std::cout << "Input new balance: ";
    double new_balance{};
    std::cin >> new_balance;

    updateAccountBalance(account, new_balance);
    printAccountDetails(account);
    return 0;
}
