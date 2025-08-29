#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string str, string ans, int i, int map[26])
{
    if (i == str.size())
    {
        cout << "ans : " << ans << endl;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');
    if (map[mapIdx]) // If the character is already present
    {
        removeDuplicates(str, ans, i + 1, map);
    }
    else // If the character is not present
    {
        map[mapIdx] = true;
        removeDuplicates(str, ans + str[i], i + 1, map);
    }
}

/*
void removeDuplicates(string str, string ans, int map[26]) // 3 arguments - without index
{
    if (str.size() == 0)
    {
        cout << "ans : " << ans << endl;
        return;
    }

    int n = str.size();
    char ch = str[n - 1];
    int mapIdx = (int)(str[n - 1] - 'a');
    str = str.substr(0, n - 1);
    if (map[mapIdx]) // If the character is already present
    {
        removeDuplicates(str, ans, map);
    }
    else // If the character is not present
    {
        map[mapIdx] = true;
        removeDuplicates(str, ch + ans, map);
    }
}
*/

int main()
{
    string str = "aaabbccccdde";
    string ans = "";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);
    return 0;
}