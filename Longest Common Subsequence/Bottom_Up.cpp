#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
    
int lcs(int x, int y, string s1, string s2)
    {
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<x+1;i++)
        dp[i][0]=0;
        
        for(int j=0;j<y+1;j++)
        dp[0][j]=0;
        
        for(int i=1;i<x+1;i++)
        {
            for(int j=1;j<y+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
        
                else if(s1[i-1]!=s2[j-1])
                dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
            }
        }
        
        return dp[x][y];
    }
    
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    
    int x=s1.size();
    int y=s2.size();
    
    memset(dp,-1,sizeof(dp));
        
    for(int i=0;i<x+1;i++)
    dp[i][0]=0;
        
    for(int j=0;j<y+1;j++)
    dp[0][j]=0;
        
    cout<<lcs(x,y,s1,s2);
    
    return 0;
}
