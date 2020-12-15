#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100008
vector<ll>edge[mx];
bool vis[mx];ll m;
void dfs(){
     stack<ll>s;
     vis[s]=1;
     s.push(1);
     while(!s.empty()){
      ll f=s.top(),s.pop();
      if(cat[f]) c++;
      else if(!cat[f]) c=0
      for(ll i=0;i<edge[f].size();i++){
       if(edge[f][i]==0){
        s.push(edge[f][i]);
        vis[edge[f][i]]=1;
       }
      }
     }
}
int main()
{
     ll n,i;
     cin>>n>>m;
     ll cat[n];
     for(i=1;i<=n;i++) cin>>cat[i];
     for(i=1;i<n;i++){
      ll u,v;
      cin>>u>>v;
      edge[u].push_back(v);
      edge[v].push_back(u);
     }
     dfs()

}
