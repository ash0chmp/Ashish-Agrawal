#include<bits/stdc++.h>
using namespace std;


int knapsack(int val[],int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsack(val,wt,n-1,w); 
    }
    return max(knapsack(val,wt,n-1,w-wt[n-1])+val[n-1],knapsack(val,wt,n-1,w));
}
int main(){
    int n;
    cin>>n;
    int val[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int wt[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    int w;
    cin>>w;
    cout<<knapsack(val,wt,n,w);
    return 0;
}