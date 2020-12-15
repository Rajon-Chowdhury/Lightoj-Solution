#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     int n,i,mx=0,j,k;
     string s;
     cin>>s;
     n=s.size();
     for(i=0;i<n;i++){
     for(j=0;j<n-i;j++){
      int d,c=1;string u;
      u=s.substr(j,i+1);
      d=u.size();
      for(k=j+1;k<n;k++){
        string v;
        v=s.substr(k,d);
        if(u==v){
          c++;
        }
        if(c>=2) break;
      }
       if(c>=2)
       mx=max(d,mx);
     }
}
      cout<<mx;
}
