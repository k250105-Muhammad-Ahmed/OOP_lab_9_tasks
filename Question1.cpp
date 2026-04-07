#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string name;
    double rate;

public:
    Vehicle() {}
    Vehicle(const string &i_name, double i_rate) : name(i_name), rate(i_rate) {}

    virtual double getDailyRate() = 0;

    virtual void getDisplay() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
public:
    Car(const string &i_name, double i_rate) : Vehicle(i_name, i_rate) {}

    double getDailyRate() override
    {
        return rate;
    }

    void getDisplay() override
    {
        cout << "Name:" << name << endl;
        cout << "Rate:" << rate << endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike(const string &i_name, double i_rate) : Vehicle(i_name, i_rate) {}

    double getDailyRate() override
    {
        return rate;
    }

    void getDisplay() override
    {
        cout << "Name:" << name << endl;
        cout << "Rate:" << rate << endl;
    }
};

int main()
{

    Vehicle *v[2];
    v[0] = new Car("Toyota", 100);
    v[1] = new Bike("Honda", 50);

    for (int i = 0; i < 2; i++)
    {
        v[i]->getDisplay();
    }

    for (int i = 0; i < 2; i++)
    {
        delete v[i];
    }

    return 0;
}
