#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mxi 200010
ll mx=-1e10;
int main()
{
     ll n,ara[mxi],i,j,k=1,za,na,pa,x,c=0,ch=0,g=-1;
     vector<ll>neg,zero,pos;
     cin>>n;
     for(i=1;i<=n;i++){
       cin>>ara[i];
       if(ara[i]<0){
         g++;
       neg.push_back(i);
        if(ara[i]>mx) x=g,mx=ara[i];
       }
       if(ara[i]==0) zero.push_back(i);
       if(ara[i]>0) pos.push_back(i);
     }
     na=neg.size();za=zero.size();pa=pos.size();
     if(na%2==1){
      if(za==0){
       cout<<2<<" "<<neg[g]<<endl;neg.erase(neg.begin()+x);
       na--;c++;
      }
      else{
        ch=1;
        zero.push_back(neg[g]);za++;
        sort(zero.begin(),zero.end());
        for(i=1;i<za&&c<n-1;i++){
         cout<<1<<" "<<zero[i-1]<<" "<<zero[i]<<endl,c++;
        }
       if(c<n-1) cout<<2<<" "<<zero[za-1]<<endl,c++;
      for(i=1;i<na&&c<n-1;i++) cout<<1<<" "<<neg[i-1]<<" "<<neg[i]<<endl,c++;
      pos.push_back(neg[i-1]);
      sort(pos.begin(),pos.end());
      for(i=1;i<pa&&c<n-1;i++) cout<<1<<" "<<pos[i-1]<<" "<<pos[i]<<endl,c++;
      }
     }
      if(!ch){
      if(za>0){
      for(i=1;i<za&&c<n-1;i++) cout<<1<<" "<<zero[i-1]<<" "<<zero[i]<<endl,c++;
      if(c<(n-1)) cout<<2<<" "<<zero[za-1]<<endl;c++;
     }
     for(i=0;i<neg.size();i++) pos.push_back(neg[i]);
     sort(pos.begin(),pos.end());
     for(i=1;i<pos.size()&&c<n-1;i++) cout<<1<<" "<<pos[i-1]<<" "<<pos[i]<<endl,c++;
     }
     return 0;
}


