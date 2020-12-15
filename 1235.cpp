#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(a) push_back(a)
#define all(a)  a.begin(),a.end()
ll coins[30];
ll n,k;

vector<ll>set1,set2;

void gen_set1(int idx, ll val)
{
   //cout<<val<<" ";
    set1.pb(val);
    if(idx==n/2) return;
    gen_set1(idx+1,val);
    gen_set1(idx+1,val+coins[idx]);
    gen_set1(idx+1,val+2*coins[idx]);
}

void gen_set2(int idx, ll val)
{
   cout<<val<<" ";
    set2.pb(val);
    if(idx==n) return;
    gen_set2(idx+1,val);
    gen_set2(idx+1,val+coins[idx]);
    gen_set2(idx+1,val+2*coins[idx]);
}

int main()
{
    int t,ca=1;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       for(int i=0;i<n;i++) cin>>coins[i];
       set1.clear();
       set2.clear();

       gen_set1(0,0);
       gen_set2(n/2,0);

       sort(set1.begin(),set1.end());
       printf("Case %d: ", ca);
       bool test=0;

       for(int i=0;i<set2.size();i++)
       {
           if(binary_search(all(set1),k-set2[i]))
           {printf("Yes\n");test=1;break;}
       }

       if(test==0)
            printf("No\n");
        ca++;
    }
    return 0;
}
