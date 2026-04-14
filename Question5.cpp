#include <iostream>
#include <string>
using namespace std;

class Activity
{
public:
    virtual void calculateCaloriesBurned() = 0;

    ~Activity() {}
};

class Running : public Activity
{
private:
    double distance;
    double timeMin;

public:
    Running(double i_distance, double i_time) : distance(i_distance), timeMin(i_time) {}

    void calculateCaloriesBurned()
    {
        cout << "\nCalories Burned by running:" << distance * timeMin << endl;
    }
};

class Cycling : public Activity
{
private:
    double speed;
    double timeH;

public:
    Cycling(double i_speed, double i_time) : speed(i_speed), timeH(i_time) {}

    void calculateCaloriesBurned()
    {
        double distance = 0, calorie = 0;
        distance = speed * timeH;
        calorie = distance * 23;
        cout << "\nCalories Burned by cycling:" << calorie << endl;
    }
};

int main()
{
    Running run(10, 30);
    Cycling cycling(10, 2);

    Activity *activity[2];

    activity[0] = &run;
    activity[1] = &cycling;

    activity[0]->calculateCaloriesBurned();
    activity[1]->calculateCaloriesBurned();

    return 0;
}
