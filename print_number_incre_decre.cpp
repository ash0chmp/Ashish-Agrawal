#include<bits/stdc++.h>
using namespace std;

int decreasing(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return decreasing(n-1);
}

void increasing(int n){
    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    increasing(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n; 
    increasing(n);
    cout<<"\n";
    decreasing(n);
    return 0;
}