#include<bits/stdc++.h>
using namespace std;

void maximum(int arr[],int n){
    int mx=-1999999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size\n";
    cin>>size;
    int*arr=new int[size];
    cout<<"\nEnter the Array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    maximum(arr,size);
    return 0;
}
