//
// Created by Kevin Koshy on 21/05/23.
//

#ifndef CHALLENGE_TRUST_ACCOUNT_H
#define CHALLENGE_TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account:public Savings_Account{

    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate, int no_of_withdrawals=4);
    bool deposit(double amount);
    bool withdraw(double amount);
protected:
    int no_of_withdrawals;
};


#endif //CHALLENGE_TRUST_ACCOUNT_H
