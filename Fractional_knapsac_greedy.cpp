/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-21 02:44:45
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;//item
   cin>>n;
   int w[n],p[n],r[n];
   for(int i =0;i<n;i++){
    cin>>w[i]>>p[i];
    r[i]=p[i]/w[i];
   }
   float s;
   cin>>s;
   // bubble sort
   for(int i =0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
if(r[j]<r[j+1]){
    swap(r[j],r[j+1]);
    swap(w[j],w[j+1]);
    swap(p[j],p[j+1]);
}
    }
   }
   //alculation
   float total;
   for(int i =0;i<n;i++){
    if(s>=w[i]){
        total+=p[i];
s-=w[i];
    }else{
        total+= p[i]*(s/w[i]);
        break;
    }
   }
   cout<<total;
    return 0;
}