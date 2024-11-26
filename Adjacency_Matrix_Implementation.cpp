/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-12 10:21:58
**/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adjmat[N][N];
int main() {
   int n,m;// n for node; m for edge
  
  
   for(int i =0;i<m;i++){
    int u,v,w;// u for first val of node and v for second val for node and w means weight
    cin>>u>>v>>w;
adjmat[u][v]=w;// for the graph directed
adjmat[v][u]=w;//for undirected both have to implement
   }
for(int i =1;i<=n;i++){
    for(int j =1;j<=n;j++){
        cout<<adjmat[i][j]<< " ";
    }
    cout<<endl;
}
   
    return 0;
}
/**
 input:
 4
5
1 2
1 3
2 4
4 3
3 2
ouput:
0 1 1 0 
0 0 0 1 
0 1 0 0
0 0 1 0
input with weight
4    
5
1 2 8
1 3 9
2 4 11
4 3 17
3 2 15

output:
0 8 9 0 
8 0 15 11 
9 15 0 17
0 11 17 0
 */