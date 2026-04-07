#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void getStatus() = 0;
    virtual ~SmartDevice() {}
};

class LightBulb : public SmartDevice
{
private:
    bool isOn;
    int brightness;

public:
    LightBulb(bool on, int bright) : isOn(on), brightness(bright) {}

    void turnOn() override
    {
        isOn = true;
    }

    void turnOff() override
    {
        isOn = false;
    }

    void getStatus() override
    {
        cout << "State:" << (isOn ? "On" : "Off") << endl;
        cout << "Brightness:" << brightness << '\n'
             << endl;
    }
    void setBright(int bright)
    {
        this->brightness = bright;
    }
};

class Thermostate : public SmartDevice
{
private:
    bool isOn;
    int Temperature;

public:
    Thermostate(bool on, int Temp) : isOn(on), Temperature(Temp) {}

    void turnOn() override
    {
        isOn = true;
    }

    void turnOff() override
    {
        isOn = false;
    }

    void getStatus() override
    {
        cout << "State:" << (isOn ? "On" : "Off") << endl;
        cout << "Temperature:" << Temperature << '\n'
             << endl;
    }
    void setTemp(int temp)
    {
        this->Temperature = temp;
    }
};

int main()
{
    LightBulb bulb(false, 50);
    Thermostate thermostate(false, 40);

    bulb.getStatus();
    bulb.turnOn();
    bulb.getStatus();

    thermostate.getStatus();
    thermostate.turnOn();
    thermostate.getStatus();

    return 0;
}
