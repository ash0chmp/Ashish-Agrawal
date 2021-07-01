#include<bits/stdc++.h>
using namespace std;


int maxsum_subarray(int a[],int n,int k,int x){
    int sum=0,ans=0;
    
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    if(sum<x){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum=sum-a[i-k];
        sum=sum+a[i];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n";
    int k,x;
    cin>>k>>x;
    cout<<maxsum_subarray(a,n,k,x);
    return 0;
}