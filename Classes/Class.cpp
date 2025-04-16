#include <iostream>

using namespace std;

class MyClass
{
public:
    int myNum;
    string myString;
};

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{
    MyClass myObj;
    myObj.myNum = 15;
    myObj.myString = "some text";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    // Multiple Objects
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    cout << carObj1.brand << " " << carObj1.model << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << carObj2.year << endl;

    return 0;
}