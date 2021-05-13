#include <bits/stdc++.h>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        
        for(int i = 1; i <= n; i++)
        {
            if(i-x >= 0)
                dp[i] = max(dp[i], dp[i-x]);
        
            if(i-y >= 0)
                dp[i] = max(dp[i], dp[i-y]);
        
            if(i-z >= 0)
                dp[i] = max(dp[i], dp[i-z]);
        
            if(dp[i] != -1)
                dp[i]++;
        }
        
        if(dp[n]<0)
        dp[n]=0;
        
        return dp[n];
    }
    
int main()
{
    int n,x,y,z;
    cin>>n;
    cin>>x>>y>>z;
    
    cout<<maximizeTheCuts(n,x,y,z);
    
    return 0;
}
