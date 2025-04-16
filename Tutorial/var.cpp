#include <iostream>
#include <string>

using namespace std;
int main()
{
    int myNum = 28; // 2 or 4bytes
    cout << myNum << "\n";
    double myFloatNum = 5.99; // 8bytes floas = 4bytes
    cout << myFloatNum << endl;
    char myLetter = 'K'; // 1byte
    cout << myLetter << endl;
    string myText = "Hello";
    cout << myText << endl;
    bool myBoolean = false;    // 1byte
    cout << myBoolean << endl; // print 0 // true = 1
    cout << "I am" << myNum << " years old.";

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum;
    cout << x + y;

    char a = 65;
    cout << a; // output A

    return 0;
}