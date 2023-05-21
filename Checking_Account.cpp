//
// Created by Kevin Koshy on 20/05/23.
//

#include "Checking_Account.h"
Checking_Account::Checking_Account(std::string name, double balance)
: Account(name, balance){

}

bool Checking_Account::withdraw(double amount) {
    balance = balance - 1.5;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os<<"Checking Account: "<<account.name<<"; Balance: "<<account.balance;
    return os;
}
