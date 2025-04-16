#include <iostream>

using namespace std;

class MyClass
{
    // Access Specifiers
    /*
    defualt private
    public: 클래스 밖에서도 접근 가능
    private: 클래스 외부에서 접근 불가
    protected: 클래스 외부에서는 접근 불가 단, 상속받은 클래스에서는 접근 가능
    */
public:
    MyClass()
    {
        cout << "Hello World";
    }
};

class Car
{
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};
// or
// Car::Car(string x, string y, int z) {
//     brand = x;
//     model = y;
//     year = z;
// }
int main()
{
    MyClass myObj;
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}