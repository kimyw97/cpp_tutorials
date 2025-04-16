#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int, greater<string>> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};
    cout << "John is: " << people["John"] << endl;
    cout << "Adele is: " << people["Adele"] << endl;
    // can use at

    people["John"] = 50;
    cout << "John is: " << people["John"] << endl;

    people["Kim"] = 29;
    cout << "Kim is: " << people["Kim"] << endl;

    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30});
    cout << people.at("Jenny") << endl;

    for (auto person : people)
    {
        cout << person.first << " is: " << person.second << endl;
    }
    people.erase("John");
    cout << people.size() << endl;
    people.clear();
    cout << people.empty() << endl;

    cout << people.count("John") << endl;
}