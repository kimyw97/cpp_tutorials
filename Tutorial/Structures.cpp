#include <iostream>
using namespace std;
int main()
{
    struct
    {
        int myNum;
        string myString;
    } myStructure, myStructure2, myStructure3;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    struct myDataType
    {
        int myNum;
        string myString;
    };

    myDataType myVar;

    return 0;
}