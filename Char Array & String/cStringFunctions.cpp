#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Copy
    char str1[100] = "Hello World";
    char str2[100] = "Namste World";
    strcpy(str1, str2);
    cout << str1 << endl;
    cout << str2 << endl;

    // Concatenation
    char str3[100] = "Hello ";
    char str4[100] = "World";
    strcat(str3, str4);
    cout << str3 << endl;
    cout << str4 << endl;

    // Compare
    char str5[100] = "Hello ";
    char str6[100] = "World";
    cout << strcmp(str5, str6); // 0 -> same, -N -> (abc,xyz), +N -> (xyz,abc)

    return 0;
}