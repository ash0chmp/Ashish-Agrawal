#include<bits/stdc++.h>
using namespace std;

int repeatability(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                //cout<<i<<"\n";
                return i;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<repeatability(a,n);
    return 0;
}