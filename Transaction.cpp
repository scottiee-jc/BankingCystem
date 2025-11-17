//
// Created by Christie, Scott (Consumer Servicing & Engagement) on 14/11/2025.
//

#include "Transaction.h"
#include <iostream>

void Transaction::setDate(const std::string & newDate) {
    date = newDate;
}

void Transaction::setUserId(const std::string & newUserId) {
    userId = newUserId;
}

void Transaction::setTransactionId(const std::string &newTransactionId) {
    transactionId = newTransactionId;
}

void Transaction::setAmount(const int & newAmount) {
    amount = newAmount;
}
