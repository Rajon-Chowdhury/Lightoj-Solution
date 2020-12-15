#include<bits/stdc++.h>
using namespace std;
string str,sbstr;
int pos[1000010],d,f,c;

void generate_pos()
{
    int m,n,i=0,j=0,k=1;
    pos[1]=0;
    for(i=2; i<=f;)
    {
        if(sbstr[i]==sbstr[j+1])
        {
            pos[i]=j+1;
            j++;
            i++;
        }
        else
        {
            if(j==0)
            {
                pos[i]=j;
                i++;
            }
            if(j) j=pos[j];
        }
    }
}
void count_frequency_kmp()
{
    int j=0,i;
    c=0;
    memset(pos,0,sizeof(pos));
    generate_pos();
    for(i=1; i<=d;)
    {
        if(str[i]==sbstr[j+1])
        {
            j++,i++;
        }
        else
        {
            if(j==0)
            {
                i++;
            }
            if(j) j=pos[j];
        }
        if(j==f)
        {
            c++;
            j=pos[j];
        }
    }
}
int main()
{
    int t,i,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str>>sbstr;
        d=str.size();
        f=sbstr.size();
        str=" "+str;
        sbstr=" "+sbstr;
        count_frequency_kmp();
        printf("Case %d: %d\n",i,c);
    }
}

