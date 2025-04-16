#include <list>
#include <iostream>

using namespace std;
int main()
{
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for (string car : cars)
    {
        cout << car << endl;
    }

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars.front() = "Opel";
    cars.back() = "Tesla";

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars.push_front("Tesla");
    cars.push_back("VW");

    cars.pop_front();
    cars.pop_back();

    // for 에서 size 사용 안됨
    cout << cars.size() << endl;
    cout << cars.empty() << endl;

        return 0;
}