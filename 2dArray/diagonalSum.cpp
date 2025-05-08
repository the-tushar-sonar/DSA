#include <iostream>
using namespace std;

void diagonalSum(int mat[][4], int n)
{
    int sum = 0;

    // Time Complexity --> O(n^2)
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < n; j++) // cols
        {
            if (i == j) // primary diagonal
            {
                sum += mat[i][j];
            }
            else if (j == n - i - 1) // secondary diagonal
            {
                sum += mat[i][j];
            }
        }
    }

    cout << "sum = " << sum << endl;
}
void diagonalSumO(int mat[][3], int n)
{
    int sum = 0;

    // Time Complexity --> O(n)
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i]; // primary diagonal
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1]; // secondary diagonal
        }
    }

    cout << "sum = " << sum << endl;
}
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    diagonalSum(arr, 4);

    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    diagonalSumO(mat, 3);

    return 0;
}