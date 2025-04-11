#include <iostream>
using namespace std;
int main()
{
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << isCodingFun << endl;
    cout << isFishTasty << endl;

    cout << (isCodingFun == 1) << endl;
    cout << (isFishTasty == 0) << endl;

    int myAge = 28;
    int votingAge = 18;

    cout << (myAge >= votingAge) << endl;

    cout << "How old are you" << endl;
    cin >> myAge;

    if (myAge >= votingAge)
    {
        cout << "Old enough to vote!" << endl;
    }
    else
    {
        cout << "not old enough to vote" << endl;
    }

    return 0;
}