#include<bits/stdc++.h>
using namespace std;

int reverese(string s,int i){
    if(i<0){
        return 0;
    }
    cout<<s[i];
    return reverese(s,i-1);
}
int main(){
    string s;
    cin>>s;
    int i;
    i=s.size();
    reverese(s,i-1);
}