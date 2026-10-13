#include <bits/stdc++.h>
using namespace std;

set<vector<int>> s;

void getAllCominations(vector<int> &arr, int idx, int tar,
                       vector<vector<int>> &ans, vector<int> &combin)
{
    if (idx == arr.size() || tar < 0)
    {
        return;
    }

    if (tar == 0)
    {
        if (s.find(combin) == s.end())
        {
            ans.push_back(combin);
            s.insert(combin);
        }

        return;
    }

    combin.push_back(arr[idx]);
    // single
    getAllCominations(arr, idx + 1, tar - arr[idx], ans, combin);
    // multiple
    getAllCominations(arr, idx, tar - arr[idx], ans, combin);
    // exclude
    combin.pop_back();
    getAllCominations(arr, idx + 1, tar, ans, combin);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> combin;

    getAllCominations(candidates, 0, target, ans, combin);

    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    combinationSum(candidates, target);

    return 0;
}