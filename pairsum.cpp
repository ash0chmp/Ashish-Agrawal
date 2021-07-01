#include<bitS/stdc++.h>
using namespace std;

bool pairsum(int a[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<"\n";
            return true;
        }
        else if(a[low]+a[high]<k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k;
    cin>>k;
    pairsum(a,n,k);
    return 0;
}