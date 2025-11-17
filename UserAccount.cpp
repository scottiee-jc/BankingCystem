//
// Created by Christie, Scott (Consumer Servicing & Engagement) on 13/11/2025.
//

#include "UserAccount.h"

void UserAccount::getTransactions(Transaction & newTransaction) {
    transactions.insert(newTransaction);
}
