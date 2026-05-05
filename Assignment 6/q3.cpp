class Account {
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;
    static long counter;

public:
    Account(const long accNo, const double bal)
        : accountNumber(accNo), balance(bal) {
        transactionID = 0;
        transactionType = "None";
    }

    long depositAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == to) {
            balance += amount;
            transactionType = "Credit";
            transactionID = ++counter;
        }
        return transactionID;
    }

    long creditAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == from) {
            balance -= amount;
            transactionType = "Debit";
            transactionID = ++counter;
        }
        return transactionID;
    }

    void displayDetails() const {
        cout << accountNumber << " | " << balance << " | " << transactionType << endl;
    }
};

long Account::counter = 0;
