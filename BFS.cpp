/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-19 18:55:52
**/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int dis[N];//height
bool vis[N];
vector<int>v[N];

void bfs(int src){// src means source from which node
queue<int>q;
q.push(src);// putting source
 vis[src] = true;
dis[src]=0;// initially height is zero
while(!q.empty()){
    int parent = q.front();
    q.pop();//FIFO
    cout<<parent<<endl;
    for(int i =0 ;i<v[parent].size();i++){// as it adj list so trying to figure out the values of that node
int child;
child = v[parent][i];//putting 
if(vis[child] == false){
    q.push(child);
    dis[child]= dis[parent]+1;
    vis[child]= true;
}
    }
}
}

int main() {
 int n,e;// n for node e for edge
 cin>>n>>e;
 while(e--){
    int a,b;
    cin>>a>>b;
v[a].push_back(b);
v[b].push_back(a);// undirected graph
 }

bfs(1);
    return 0;
}

/**
 *    input:
 * 
5 4 // n &e
1 2 
1 3
2 4
5 4

output

1
2
3
4
5

 * 
**/