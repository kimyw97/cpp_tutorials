#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    vector<string>::iterator it;

    for (it = cars.begin(); it != cars.end(); ++it)
    {
        cout << *it << endl;
    }
}
