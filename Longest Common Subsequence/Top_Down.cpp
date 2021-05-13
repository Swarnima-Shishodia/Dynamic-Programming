#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
    
int lcs(int x, int y, string s1, string s2)
{
    if(dp[x][y]!=-1)
    return dp[x][y];
        
    if(s1[x-1]==s2[y-1])
    return dp[x][y]=1+lcs(x-1,y-1,s1,s2);
        
    else if(s1[x-1]!=s2[y-1])
    return dp[x][y]=max(lcs(x,y-1,s1,s2), lcs(x-1,y,s1,s2));
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
