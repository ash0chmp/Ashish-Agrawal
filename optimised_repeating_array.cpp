#include<bits/stdc++.h>
using namespace std;

void repeatability(int a[],int n){
    int m=100;
    int an[m];
    for(int i=0;i<m;i++){
        an[i]=-1;
    }

    int minIndex=INT_MAX;
    for(int i=0;i<n;i++){
        if(an[a[i]]!=-1){
            minIndex=min(minIndex,an[a[i]]);
        }
        else{
            an[a[i]]=i;
        }
    }
    if(minIndex==INT_MAX){
        cout<<"Not Repeating"<<"\n";
    }
    else{
        cout<<minIndex+1<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    repeatability(a,n);
    return 0;
}