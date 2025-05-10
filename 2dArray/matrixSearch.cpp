#include <iostream>
using namespace std;

// Brute Force Method --> O(n*m)
bool search(int mat[][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                cout << "key is found at index " << i << "," << j << endl;
                return true;
            }
        }
    }
    cout << "Key is not found " << endl;
    return false;
}

// Binary Search Method --> O(log (n*m))
// This is not working for the given matrix because the matrix is not sorted in a single row or column.
bool bSearch(int mat[][4], int n, int m, int key)
{
    int st = 0, end = n * m - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        int row = mid / m; // row index
        int col = mid % m; // col index
        int midVal = mat[row][col];

        if (midVal == key)
        {
            cout << "key is found at index " << row << "," << col << endl;
            return true;
        }
        else if (midVal < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Key is not found " << endl;
    return false;
}

// Staircase Search Method --> O(n+m)
bool sSearch(int mat[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            cout << "key is found at index " << i << "," << j << endl;
            return true;
        }
        else if (mat[i][j] > key)
        {
            // left
            j--;
        }
        else
        {
            // down
            i++;
        }
    }

    cout << "Key is not found " << endl;
    return false;
}

int main()
{
    // 2D array
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    // search(mat, 4, 4, 29);
    // bSearch(mat, 4, 4, 29);
    sSearch(mat, 4, 4, 29);

    return 0;
}