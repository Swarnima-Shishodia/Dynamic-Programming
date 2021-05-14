#include <bits/stdc++.h>
using namespace std;

int dp[101][101];
    
int main()
{
    string a,b;
    cin>>a>>b;
    
    int m=a.size();
    int n=b.size();
    
    memset(dp,-1,sizeof(dp));
    
    for(int i=0;i<m+1;i++)
        dp[i][0]=0;
        
    for(int i=0;i<n+1;i++)
        dp[0][i]=0;
        
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(a[i-1]==b[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else if(a[i-1]!=b[j-1])
            dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    cout<<(m+n-dp[m][n]);
    
    return 0;
}
