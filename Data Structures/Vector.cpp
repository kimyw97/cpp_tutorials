#include <vector>
#include <iostream>

using namespace std;
int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for (string car : cars)
    {
        cout << car << endl;
    }
    cout << cars[0] << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(1) << endl;
    cout << cars.at(2) << endl;
    cars[0] = "Opel";
    cars.at(0) = "Volvo";

    cars.push_back("Tesla");
    cars.pop_back();
    cout << cars.size() << endl;
    cout << cars.empty() << endl;
}