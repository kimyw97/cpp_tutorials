#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;
    x = y = z = 50;
    cout << x + y + x << endl;
    return 0;
}