#include <stack>
#include <iostream>

using namespace std;

int main()
{
    stack<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << cars.top() << endl;

    cars.top() = "Tesla";
    cout << cars.top() << endl;

    cars.pop();

    cout << cars.top() << endl;

    cout << cars.size() << endl;

    cout << cars.empty() << endl;

    return 0;
}