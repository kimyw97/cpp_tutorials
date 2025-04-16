#include <iostream>

using namespace std;

class MyClass
{
public:
    void myMethod()
    {
        cout << "Hello World!" << endl;
    }
    void myMethod2();
};

void MyClass::myMethod2()
{
    cout << "Hello World2!" << endl;
}

int main()
{
    MyClass myObj;
    myObj.myMethod();
    myObj.myMethod2();
    return 0;
}