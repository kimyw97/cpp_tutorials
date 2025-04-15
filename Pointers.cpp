#include <iostream>

using namespace std;

int main()
{
    string food = "Pizza";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;

    // Dereference
    cout << *ptr << endl;

    // Modift the Pointer Value
    *ptr = "Hamburgger";

    cout << *ptr << endl;

    cout << food << endl;
}
