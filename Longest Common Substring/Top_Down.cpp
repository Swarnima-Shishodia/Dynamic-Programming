#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main()
{
    string S1,S2;
    cin>>S1>>S2;
    
    int m=S1.size();
    int n=S2.size();
    
    int count=0;
    memset(dp,-1,sizeof(dp));
        
    for(int i=0;i<m;i++)
    dp[0][i]=0;
        
    for(int i=0;i<n;i++)
    dp[i][0]=0;
        
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(S1[i-1]==S2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
                
            else
            dp[i][j]=0;
        }
    }
        
    int ans=INT_MIN;
    
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
            ans=max(ans,dp[i][j]); 
    }
    
    cout<<ans<<endl;
    
    return 0;
}
