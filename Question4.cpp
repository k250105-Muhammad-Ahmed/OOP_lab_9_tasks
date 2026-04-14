#include <iostream>
#include <string>
using namespace std;

class PaymentMethod
{
public:
    virtual void processPayment(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod
{
private:
    string cardNumber;

public:
    CreditCard(const string &number) : cardNumber(number) {}

    void processPayment(double amount) override
    {
        cout << "\nProcessing amount:" << amount << endl;

        if (cardNumber.length() == 16)
        {
            cout << "Success payment for card:" << cardNumber << endl;
        }
        else
        {
            cout << "Error card in invalid" << endl;
        }
    }
};

class DigitalWallet : public PaymentMethod
{
private:
    double balance;

public:
    DigitalWallet(double amount) : balance(amount) {}

    void processPayment(double amount) override
    {
        cout << "\nProcessing amount:" << amount << endl;

        if (balance >= amount)
        {
            balance -= amount;
            cout << "Success payment for wallet new balance:" << balance << endl;
        }
        else
        {
            cout << "Error balance is insufficient" << endl;
        }
    }
};

int main()
{
    CreditCard visa("1234567890123456");
    DigitalWallet payPal(150.00);

    PaymentMethod *payments[2];
    payments[0] = &visa;
    payments[1] = &payPal;

    payments[0]->processPayment(100);
    payments[1]->processPayment(100);

    return 0;
}