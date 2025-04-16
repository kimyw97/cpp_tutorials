#include <iostream>

using namespace std;

void myFunction() // declaration
{
    cout << "I just got executed"; // definition
}

void myFunction2();
void myFunction3(string fname);
void myFunction4(string country = "Norway");
void myFunction5(string fname, int age);
int myFunction6(int x);
int myFunction7(int x, int y);
void swapNums(int &x, int &y);
void modifyStr(string &str);
void myFunction8(int myNumber[5]);
float toCelsius(float fahrenheit);
// Function Overloading
int plusFuncInt(int x, int y)
{
    return x + y;
}

double plusFuncDouble(double x, double y)
{
    return x + y;
}
// Recursion
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    myFunction();
    myFunction();
    myFunction();
    myFunction2();
    myFunction3("KIM");
    myFunction4();
    myFunction4("Korea");
    myFunction5("KIM", 29);
    cout << myFunction6(10) << endl;
    cout << myFunction7(10, 7) << endl;

    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap:" << firstNum << " " << secondNum << endl;
    swapNums(firstNum, secondNum);
    cout << "After swap: " << firstNum << " " << secondNum << endl;

    string greeting = "Hello";
    modifyStr(greeting);
    cout << greeting << endl;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction8(myNumbers);

    float f_value = 98.8;

    float result = toCelsius(f_value);

    cout << "Fahrenheit: " << f_value << endl;
    cout << "Convert Fahrenheit to Celsius: " << result << endl;

    int myNum1 = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << endl;
    cout << "Double: " << myNum2 << endl;

    cout << sum(10) << endl;
    return 0;
}

void myFunction2()
{
    cout << "I just got excuted2" << endl;
}

// Parameters and Arguments

void myFunction3(string fname)
{
    cout << fname << " Refsnes\n";
}

// Default Parameter Value
void myFunction4(string country)
{
    cout << country << endl;
}

// Multiple Parameters
void myFunction5(string fname, int age)
{
    cout << fname << " Refesnes." << age << "years old. \n";
}
// Return Value
int myFunction6(int x)
{
    return 5 + x;
}

int myFunction7(int x, int y)
{
    return x + y;
}

// Pass By Reference

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void modifyStr(string &str)
{
    str += " World!";
}
// Pass Arrays as Function Parameters
void myFunction8(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << endl;
    }
}

// Real Life Example
float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}