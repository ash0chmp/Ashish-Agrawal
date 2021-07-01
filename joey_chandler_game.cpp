#include<bits/stdc++.h>
using namespace std;

void winner(int n,int m,int i){
     if(i%2==0){
        if(n<i){
            cout<<"Joey";
            return;
        }
        else{
            n=n-i;
            m=m+i;
        }
    }
    else{
        if(m<i){
           cout<<"Chandler";
           return;
        }
        else{
            n=n+i;
            m=m-i;  
        }
    }
    winner(n,m,i+1);
}

int main(){
    int n,m;
    cin>>n>>m;
    winner(n,m,1);
    return 0;
}