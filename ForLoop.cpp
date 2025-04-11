#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    for (int i = 0; i <= 10; i = i + 2)
    {
        cout << i << endl;
    }

    // Nested Loops
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << endl;

        for (int j = 1; j <= 3; ++j)
        {
            cout << "Inner: " << j << endl;
        }
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << endl;
    }

    return 0;
}