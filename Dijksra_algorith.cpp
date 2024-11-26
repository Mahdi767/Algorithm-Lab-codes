/**
 *    author:  Mahdi Hasan
 *    created: 2024-10-31 10:16:57
**/

#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N= 1e3+5;
vector<pii>adj[N];
void dijkstra(int source){
priority_queue<pii,vector<pii>,greater<pii>>pq;

}
int main() {
   int n,m;
   cin>>n>>m;
   for(int i =0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
adj[u].push_back({v,w});
adj[v].push_back({u,w});
   }

    return 0;
}