#include<bits/stdc++.h>
using namespace std;

int first_occurence(int a[],int n,int i,int num){
    if(i==n){
        return 0;
    }
    if(a[i]==num){
        return i;
    }
    return first_occurence(a,n,i+1,num);
}

int last_occurence(int a[],int n,int i,int num){
    if(i<0){
        return 0;
    }
    if(a[i]==num){
        return i;
    }
    return last_occurence(a,n,i-1,num);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num;
    cin>>num;
    cout<<"First occurence "<<first_occurence(a,n,0,num)<<"\n";
    cout<<"Last occurence "<<last_occurence(a,n,n-1,num);
    return 0;
}