#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int*arr=new int[n];
    cout<<"Enter the Array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"\nEnter the key\n ";
    cin>>key;
    if(linear_search(arr,n,key)){
        cout<<"\nGiven key is present in Array\n";
    }
    else{
        cout<<"\nGiven key is not present in Array\n";
    }
    return 0;
}