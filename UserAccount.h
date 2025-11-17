//
// Created by Christie, Scott (Consumer Servicing & Engagement) on 13/11/2025.
//

#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <string>
#include <set>
#include "Transaction.h"
using namespace std;


class UserAccount {
public:
    string accountNumber;
    string sortCode;
    set<Transaction> transactions;

    void getTransactions(Transaction & newTransaction);
};



#endif //USERACCOUNT_H

// A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.