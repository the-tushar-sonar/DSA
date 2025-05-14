#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;

    vector<int> vec2 = {1, 2, 3, 4, 5, 6};
    cout << "size : " << vec2.size() << endl;
    cout << "capacity : " << vec2.capacity() << endl;

    vec2.push_back(7);
    cout << "size : " << vec2.size() << endl;
    cout << "capacity : " << vec2.capacity() << endl;

    vec2.pop_back();
    cout << "size : " << vec2.size() << endl;
    cout << "capacity : " << vec2.capacity() << endl;

    vector<int> vec3(5, -1);

    cout << "size : " << vec3.size() << "\n";

    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }
    cout << endl;

    return 0;
}