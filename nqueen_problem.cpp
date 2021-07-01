#include <bits/stdc++.h>
using namespace std;

bool issafe(int **arr, int n, int x, int y)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {                                                //for checking each and every row
            return false;
        }
    }

    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {                                                   //for checking left diagonal
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {                                                   //for checking right diagonal
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nqueen(int **arr, int n, int x)
{
    if (x >= n)
    {                                                       //queen is already been placed
        return true;
    }

    for (int col = 0; col < n; col++)
    {                                                       //for each n every column
        if (issafe(arr, n, x, col))
        {
            arr[x][col] = 1;
            if (nqueen(arr, n, x + 1))
            {
                return true;
            }
            arr[x][col] = 0;                                //backtracking
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nqueen(arr, n, 0))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}