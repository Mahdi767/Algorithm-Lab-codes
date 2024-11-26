/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-20 00:36:42
**/

#include <bits/stdc++.h>
using namespace std;
int knapsack(int n,int s,int v[],int w[]){
if(n==0 || s==0) return 0;// if item or limit cross not available return 0
if(w[n-1]<=s){
    int op1=knapsack(n-1,s-w[n-1],v,w) + v[n-1];//taking the  item 1
    int op2 =knapsack(n-1,s,v,w);// not taking that item 0
    return max(op1,op2);
}else{
    return knapsack(n-1,s,v,w);
}
}
int main() {
 int n;// Nub of item
 cin>>n;
 int v[n],w[n];// v for value / profit
 for(int i =0;i<n;i++){
    cin>>v[i];
 }
 for(int i =0;i<n;i++){
    cin>>w[i];// for weight
 }
 int s;//limit
 cin>>s;
cout<<knapsack(n,s,v,w);
    return 0; 
}


/**
input
4
1 2 5 6
2 3 4 5
8
output
8
**/