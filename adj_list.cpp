/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-12 10:57:26
**/

#include <bits/stdc++.h>
using namespace std;// Unweighted and directed
const int N=1e6+5;
vector<int>adj[N];// ekta node theke koyta ase connect
int main() {
   int n,m;// n node m edge
   cin>>n>>m;
   for(int i =0;i<m;i++){
    int u,v;// n1 n2
    cin>>u>>v;
adj[u].push_back(v);// for directed Just need to push v to u
//adj[v].push_back(u);// for undirected both needed as both will push each other
  
   }

for(int i =1;i<=n;i++){
    cout<<"List"<<i<<": ";
    for(int j : adj[i]){// as because now adj i value is v's value as it push back
cout<<j<< " ";
    }
    cout<<endl;
}
    return 0;
}

/**
 input
 4
5
1 2
1 3
2 4
4 3
3 2
output

 List1: 2 3 
List2: 4 
List3: 2 
List4: 3

undirected


**/