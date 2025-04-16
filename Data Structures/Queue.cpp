#include <queue>
#include <iostream>

using namespace std;
int main()
{
    queue<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars.front() = "Tesla";
    cars.back() = "VW";

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << cars.size() << endl;

    cars.pop();
    cout << cars.size() << endl;
    cout << cars.empty() << endl;

    return 0;
}