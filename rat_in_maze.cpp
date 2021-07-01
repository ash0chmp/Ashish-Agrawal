#include <bits/stdc++.h>
using namespace std;

bool issafe(int **arr, int n, int x, int y)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int n, int x, int y, int **solArr)
{
    if ((x == n - 1) && (y == n - 1))
    {
        solArr[x][y] = 1;
        return true;
    }
    if (issafe(arr, n, x, y))
    {
        solArr[x][y] = 1;
        if (ratinMaze(arr, n, x + 1, y, solArr))
        {
            return true;
        }
        if (ratinMaze(arr, n, x , y+1, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;
        return false;
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
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    cout<<endl;
    if (ratinMaze(arr, n, 0, 0, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}

// 5
// 1 0 1 0 1
// 1 1 1 1 1 
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1