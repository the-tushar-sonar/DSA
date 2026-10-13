#include <bits/stdc++.h>
using namespace std;

void getAllCombination(vector<int> &arr, int idx, int tar,
                       vector<vector<int>> &ans, vector<int> &combin)
{
    if (tar == 0)
    {
        ans.push_back(combin);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        if (i > idx && arr[i] == arr[i - 1])
            continue;

        if (arr[i] > tar)
            break;

        combin.push_back(arr[i]);
        getAllCombination(arr, i + 1, tar - arr[i], ans, combin);
        combin.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> combination;
    sort(candidates.begin(), candidates.end());

    getAllCombination(candidates, 0, target, ans, combination);

    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    combinationSum2(candidates, target);

    return 0;
}