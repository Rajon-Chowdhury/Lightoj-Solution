#include<bits/stdc++.h>
using namespace std;
long long int a[500][500],dp[500][500];
int main()
{
    int T,kase=0;
    scanf("%d",&T);
    while(T--)
    {
        int i,j,k,N,y;
        scanf("%d",&N);
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));
        for(i=0;i<N;i++)
            for(j=0;j<=i;j++)
                scanf("%lld",&a[i][j]);

        for(i=N,k=N-1;i<2*N-1;i++,k--)
            for(j=0;j<k;j++)
                scanf("%lld",&a[i][j]);

        dp[0][0]=a[0][0];

        for(i=0;i<N-1;i++)
            for(j=0;j<=i;j++)
            {



            }

        for(i=N,k=N-1;i<2*N-1;i++,k--)
            for(j=0;j<k;j++)
            {
                y=max(dp[i-1][j],dp[i-1][j+1]);
                dp[i][j] = a[i][j]+y;
            }
        printf("Case %d: %lld\n",++kase,dp[2*N-2][0]);
    }
}
