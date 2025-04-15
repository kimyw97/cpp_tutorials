#include <iostream>

using namespace std;
enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

enum Level2
{
    LOW2 = 25,
    MEDIUM2 = 50,
    HIGH2 = 75
};

enum Level3
{
    LOW3 = 5,
    MEDIUM3, // 6
    HIGH3    // 7
};
int main()
{
    enum Level myVar = MEDIUM;

    cout << myVar << endl; // 1

    enum Level2 myVar2 = MEDIUM2;

    cout << myVar2 << endl; // 50

    enum Level3 myVar3 = MEDIUM3;

    cout << myVar3 << endl;

    switch (myVar)
    {
    case 0:
        cout << "Low Level" << endl;
        break;

    case 1:
        cout << "Medium Level" << endl;
        break;

    case 2:
        cout << "High Level" << endl;
        break;
    }
}