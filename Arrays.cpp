#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    int myNums[3] = {10, 20, 30};

    cout << cars[0] << endl;

    cars[0] = "Opel";

    cout << cars[0] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << i << "=" << cars[i] << endl;
    }
    for (string car : cars)
    {
        cout << car << endl;
    }

    for (int i : myNums)
    {
        cout << i << endl;
    }

    // Omit Array
    string carss[] = {"Volvo", "BMW", "Ford"};
    string carsss[3];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    // err
    // string cars[];  // Array size is not specified
    // cars[0] = "Volvo";
    // cars[1] = "BMW";
    // cars[2] = "Ford";
    // cars[3] = "Mazda";
    // cars[4] = "Tesla";

    // Fixed Size(Arrays) vs Dynamic Size(Vector)
    // An array with 3 elements
    // string cars[3] = {"Volvo", "BMW", "Ford"};

    // // Trying to add another element (a fourth element) to the cars array will result in an error
    // cars[3] = "Tesla";

    vector<string> carssss = {"Volvo", " BMW", "Ford"};
    carssss.push_back("Tesla");

    // Get the size of an Array //byte size
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers) << endl; // byte size

    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength << endl;

    // Loop Through an Array with sizeof()
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)
    {
        cout << myNumbers[i] << endl;
    }

    // Real Life Example
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];

    for (int age : ages)
    {
        if (lowestAge > age)
        {
            lowestAge = age;
        }
    }

    cout << "The lowest age is: " << lowestAge << endl;

    // Multi-Dimensional Arrays
    // string letters[2][4];
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    string letters2[2][2][2] = {{{"A", "B"}, {"C", "D"}}, {{"E", "G"}, {"H", "I"}}};

    cout << letters[0][2] << endl;

    letters[0][0] = "Z";

    cout << letters[0][0] << endl;

    // Loop
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << endl;
        }
    }

    return 0;
}