#include <iostream>

using namespace std;

int main()
{
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "20 is greater than 18" << endl;
    }

    int time = 22;
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }

    // Short Hand if..else(Ternary Operator)
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    return 0;
}