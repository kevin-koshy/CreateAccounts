//
// Created by Kevin Koshy on 20/05/23.
//

#ifndef CHALLENGE_CHECKING_ACCOUNT_H
#define CHALLENGE_CHECKING_ACCOUNT_H

#include "Account.h"

class Checking_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
public:
    Checking_Account(std::string name = def_name, double balance= def_balance);

    bool withdraw(double amount);
};


#endif //CHALLENGE_CHECKING_ACCOUNT_H
