#include <iostream>

using namespace std;

class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut!" << endl;
    }
};
// Multiple Inheritance
class Machine
{
};
class Car : public Vehicle, public Machine
{
public:
    string model = "Mustang";
};

// Multilevel Inheritance
class MustangSeries : public Car
{
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;
}
