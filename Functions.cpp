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