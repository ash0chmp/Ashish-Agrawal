#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char src,char helper,char dest){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,src,dest,helper);
    cout<<src<<"-"<<dest<<"\n";
    towerofhanoi(n-1,helper,src,dest);
}

int main(){
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');
    return 0;
}