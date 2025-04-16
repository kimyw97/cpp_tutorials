#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars)
    {
        cout << car << endl;
    }

    cout << cars[0] << endl;
    cout << cars.at(0) << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars[0] = "Opel";
    cars.at(1) = "KIA";

    cout << cars[1] << endl;
    cars.push_front("Tesla");
    cars.push_back("VW");
    cout << cars.size() << endl;
    cars.pop_front();
    cars.pop_back();
    cout << cars.size() << endl;
    cout << cars.empty() << endl;

    for (int i = 0; i < cars.size(); i++)
    {
        cout << cars[i] << endl;
    }
}