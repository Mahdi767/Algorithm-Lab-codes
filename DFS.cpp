/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-20 09:08:31
**/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool visi[N];
vector<int>v[N];

void dfs(int src){
visi[src] = true;
cout<<"Visite Node"<<" "<<src<<endl;
for(int child : v[src]){
    if(visi[child]==true) continue;
    dfs(child);
}
}
int main() {
int n,e;
cin>>n>>e;
while(e--){
    int a,b;
    cin>>a>>b;// node 1  and 2
v[a].push_back(b);
v[b].push_back(a);

}
dfs(1);
    return 0;
}