#include<bits/stdc++.h>
using namespace std;

void missing_number(int a[],int n){
    const int m = 1e6+2;
    bool check[m];
    for(int i=0;i<m;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<m;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    if(ans==-1){
        cout<<"No missing value\n";
    }
    else{
        cout<<ans;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    missing_number(a,n);
    return 0;
}