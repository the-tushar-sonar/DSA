#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";
    cout << str << endl;
    str = "yellow";
    cout << str << endl;

    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str.at(3) << endl;
    cout << str.at(4) << endl;

    cout << "Length of str : " << str.length() << endl;

    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);
    cout << str1 << endl;

    // for (int i = 0; i < str1.length(); i++)
    // {
    //     cout << str1[i] << "-";
    // }
    // cout << endl;

    //  For each loop
    for (char ch : str1)
    {
        cout << ch << "-";
    }
    cout << endl;

    cout << str1.substr(0, 5) << endl;

    string str2 = "I love coding in C++ and Python, but not for development in C++.";
    cout << str2.find("C++") << endl;
    cout << str2.find("C++",20) << endl;

    // cout << str2.find("Java") << endl;
    cout << int(str2.find("Java")) << endl;

    
    return 0;
}