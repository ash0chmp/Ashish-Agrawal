#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;

    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i] != a[n-1-i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"\nWord is palindrome\n";
    }
    else{
        cout<<"\nWord is not palindrome\n";
    }
    return 0;
}