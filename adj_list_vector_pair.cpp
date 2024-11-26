/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-12 10:57:26
**/

#include <bits/stdc++.h>
using namespace std;// Unweighted and directed
const int N=1e6+5;
vector<pair<int,int> >adj[N];
int main() {
   int n,m;// n node m edge
   cin>>n>>m;
   for(int i =0;i<m;i++){
    int u,v,w;// n1 n2
    cin>>u>>v>>w;
adj[u].push_back({v,w});// for directed Just need to push v to u as well w for weight 
//adj[v].push_back({u,w});// for undirected both needed as both will push each other
  
   }

for(int i =1;i<=n;i++){
    cout<<"List"<<i<<": ";
    for(auto j : adj[i]){// as because now adj i value is v's value as it push back
cout<<"("<<j.first;
cout<<","<<j.second<<"), ";
    
    }
   cout<< endl;
}
    return 0;
}

/**
 input
 


**/