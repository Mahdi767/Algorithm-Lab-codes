/**
 *    author:  Mahdi Hasan
 *    created: 2024-11-20 21:18:23
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  // First part
 string a,b;
 cin>>a>>b;// taking two sring
 int n=a.size(),m=b.size();// for table size
 int dp[n+1][m+1];
 for(int i =0;i<=n;i++){// here I is for coluumn
for(int j = 0;j<=m;j++){// j for row
if(i ==0 || j==0) dp[i][j]=0;
}
 }
 for(int i =1;i<=n;i++){
    for(int j =1;j<=m;j++){
        if(a[i-1]== b[j-1]){
            dp[i][j]=dp[i-1][j-1]+1;
        }else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
 }

 // second part
 int  i =n;int j=m;

 string ans;
while( i != 0 && j!=0){
  if(a[i-1]== b[j-1]){
    ans+=a[i-1];
    i--;
    j--;
  }else{
    if(dp[i][j-1]>dp[i-1][j]){
        j--;
    }else{
        i--;
    }
  }
}
reverse(ans.begin(),ans.end());
cout<<ans;
    return 0; 
}