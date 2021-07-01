#include <bits/stdc++.h>
using namespace std;

// int maxSum(int a[], int n, int k)
// {
//     int sum = 0;
//     int ans = 0;
//     if (k == 1)
//     {
//         return *max_element(a, a + n);
//     }
//     for (int i = 0; i < k; i++)
//     {
//         sum += a[i];
//     }
//     ans = sum;
//     for (int i = k; i < n; i++)
//     {
//         sum = sum - a[i - k];
//         sum = sum + a[i];
//         ans = max(ans, sum);
//     }
//     return ans;
// }
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int sum = 0;
        int ans = 0;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // cout<<maxSum(a,n,k)<<"\n";
        // if (k == 1)
        // {
        //     return *max_element(a, a + n);
        // }
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
        }
        ans = sum;
        for (int i = k; i < n; i++)
        {
            sum = sum - a[i - k]; 
            sum = sum + a[i];
            ans = max(ans, sum);
        }
        cout << ans << "\n";
    }
    return 0;
}