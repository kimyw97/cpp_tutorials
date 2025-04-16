#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }

    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 5);

    int countdown = 3;
    while (countdown > 0)
    {
        cout << countdown << endl;
        countdown--;
    }
    cout << "Happy New Year!!\n";
    return 0;
}