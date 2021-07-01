#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    int key;
    cin>>key;
    cout<<"\n";

    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0){
        if(a[r][c]==key){
            flag=true;
        }
        if(a[r][c]<key){
            r++;
        }
        else{
            c--;
        }
    }
    if(flag){
        cout<<"Key is found\n";
    }
    else{
        cout<<"Key is not found";
    }
    return 0;
}