#include <iostream>
#include <fstream>
/*
ofstream: 생성 그리고 쓰기
ifstream: 읽기
fstream: of + if
 */
using namespace std;
int main()
{
    ofstream MyFile("filename.txt");
    MyFile << "Files can be tricky, but it is fun enough";

    MyFile.close();

    string myText;
    ifstream MyReadFile("filename.txt");

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    MyReadFile.close();
    return 0;
}