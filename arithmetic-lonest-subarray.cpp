#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd=arr[0]-arr[1];       //previous common difference
    int curr=2;                 //As we have to find common difference minimum length should be 2
    int ans=2;                  //As we have to find common difference minimum length should be 2

    for(int i=0;i<n;i++){
        if(pd == arr[i]-arr[i-1]){
            curr++;
        }
        else{
            pd = arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<"Length of longest arithmatic subarray is "<<ans;
    return 0;
}