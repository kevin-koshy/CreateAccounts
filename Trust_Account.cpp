//
// Created by Kevin Koshy on 21/05/23.
//

#include "Trust_Account.h"

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Accounts: " << account.name << ": Balance: " << account.balance << ", Interest Rate: "
       << account.int_rate << "%, Withdrawals Left: "<<account.no_of_withdrawals<<"]";
    return os;
}


Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int num_withdrawals)
        : Savings_Account {name, balance, int_rate}, no_of_withdrawals{num_withdrawals} {
}

bool Trust_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    if (amount > 5000){
        balance = balance + 50;
        return Account::deposit(amount);
    }
    else
        return Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if ((balance - amount > 0 )&& (no_of_withdrawals > 0)){
        balance = balance - amount;
        no_of_withdrawals-=1;
        return true;
    }
    else
        return false;
}
