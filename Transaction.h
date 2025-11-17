//
// Created by Christie, Scott (Consumer Servicing & Engagement) on 14/11/2025.
//

#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>
using namespace std;

class Transaction {
public:
    string transactionId;
    string userId;
    string date;
    int amount;

    void setDate(const string &newDate);
    void setUserId(const string &userId);
    void setTransactionId(const string &transactionId);
    void setAmount(const int &amount);

    // Overload the < operator to compare transactions based on transactionId
    // This is necessary for storing Transaction objects in a std::set
    bool operator<(const Transaction &other) const {
        return transactionId < other.transactionId;
    }
};


#endif //TRANSACTION_H
