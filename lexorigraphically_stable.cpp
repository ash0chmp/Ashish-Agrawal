#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int minL=INT_MAX;
    for(int i=0;i<s.size();i++){
        int get;
        get=s[i]-'a';
        minL=min(minL,get);
    }
    int ans;
    ans=minL+97;
    for(int i=0;i<s.size();i++){
        cout<<char(ans);
    }
    return 0;
}