#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
        // cout << "At i = " << i << endl;
        // cout << vec.size() << endl;
        // cout << vec.capacity() << endl;
    }

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}