#include <iostream>
using namespace std;

// Brute Force Method --> O(n*m)
int search(int mat[][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                cout << "key is found at index " << i << "," << j << endl;
            }
        }
    }

    return 0;
}
// Binary Search Method --> O(n*log m) or O(log n*m)
int bSearch(int mat[][4], int n, int m, int key)
{

    return 0;
}
// Staircase Search Method --> O(n+m)
int sSearch(int mat[][4], int n, int m, int key)
{

    return 0;
}

int main()
{
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    search(mat, 4, 4, 29);

    return 0;
}