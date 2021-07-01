#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int m;
    cin>>m;
    string q[m];
    for(int i=0;i<m;i++){
        cin>>q[i];
    }
    for(int i=0;i<m;i++){
        int ans=0;
        for(int j=0;j<n;j++){
            if(q[i]==s[j]){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}