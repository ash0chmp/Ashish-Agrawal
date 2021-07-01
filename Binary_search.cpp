#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int arr[],int n,int k){
    int high=n-1;
    int low=0;
    for(int i=0;i<n;i++){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            //cout<<mid;
            return mid;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
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
    int key;
    cout<<"\nEnter the key\n";
    cin>>key;
    sort(arr,arr+size);
    if(binary_search(arr,size,key)==-1){
        cout<<"\nGiven key is not present\n";
    }
    else{
        cout<<"Index value of given key is "<<binary_search(arr,size,key);
    }
    return 0;
}