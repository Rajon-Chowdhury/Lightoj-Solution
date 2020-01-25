#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1010][3],a[1010][3],JUMP[1010][3];
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(dp,0,sizeof dp);
        memset(a,0,sizeof a);
        memset(JUMP,0,sizeof JUMP);
        for(int i=1; i<=n; i++)
            cin>>a[i][0];
        for(int i=1; i<=n; i++)
            cin>>a[i][1];

        dp[1][0]=a[1][0];
        dp[1][1]=a[1][1];
        for(int i=2; i<=n; i++)
            dp[i][0]=INT_MAX,dp[i][1]=INT_MAX;

        for(int i=2; i<=n; i++)
            cin>>JUMP[i][0];
        for(int i=2; i<=n; i++)
            cin>>JUMP[i][1];

        for(int i=2; i<=n; i++)
        {
            int x=INT_MAX,y=INT_MAX,u=INT_MAX,v=INT_MAX;

            x=dp[i-1][0]+a[i][0];
            y=dp[i-1][0]+a[i][1]+JUMP[i][0];

            u=dp[i-1][1]+a[i][1];
            v=dp[i-1][1]+a[i][0]+JUMP[i][1];

            dp[i][0]=min(x,v);
            dp[i][1]=min(y,u);

        }
        int ans=min(dp[n][0],dp[n][1]);
        cout<<"Case "<<cs++<<": "<<ans<<endl;


    }
}
