#include <string>
#include <iostream>
using namespace std;
int main()
{
    string greeting = "hello";
    cout << greeting << endl;

    string firstName = "Kim";
    string lastName = "YoungWook";
    string fullName = firstName + " " + lastName;

    cout << fullName << endl;

    fullName = firstName.append(lastName);
    cout << fullName << endl;

    // adding Num and Str
    // +  = num add , string concatenate
    // x + a ==> error occurs
    int x = 10;
    int y = 20;
    cout << x + y << endl;

    string a = "10";
    string b = "20";
    cout << a + b << endl;

    // String Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "the length of the txt string is: " << txt.length() << endl;
    cout << "the length of the txt string is: " << txt.size() << endl;

    // Access Strings
    string myString = "hello";
    cout << myString[0] << endl;
    cout << myString[myString.size() - 1] << endl;

    // Change String Characters
    myString[0] = 'j';
    cout << myString << endl;

    // at()
    cout << myString;
    cout << myString.at(0);
    cout << myString.at(1);
    cout << myString.at(myString.length() - 1);
    myString.at(0) = 'h';
    cout << myString << endl;

    // Spcial Characters ' "
    txt = "we are the so-called \"Vikings\" form the north";
    cout << txt << endl;

    // User Input Strings
    cout << "Type your first name:";
    // cin >> firstName;
    cout << "your name is: " << firstName << endl;

    cout << "Type your full name:" << endl;
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;

    // Omitting Namespace
    // std:: string greeting = "Hello"

    return 0;
}