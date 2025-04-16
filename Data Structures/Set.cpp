#include <set>
#include <iostream>

using namespace std;

int main()
{
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda", "BMW"};

    cars.insert("Tesla");
    for (string car : cars)
    {
        cout << car << endl;
    }
    cars.erase("Volvo");
    for (string car : cars)
    {
        cout << car << endl;
    }

    set<int, greater<int>> nums = {1, 2, 4, 9, 5, 7};
    for (int num : nums)
    {
        cout << num << endl;
    }
    cout << cars.size() << endl;
    cars.clear();
    cout << cars.size() << endl;
    cout << cars.empty() << endl;
}