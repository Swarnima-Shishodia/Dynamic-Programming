#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
    
long long numberOfWays(int coins[],int n,int sum)
{
    if(n==0)
    return 0;
        
    if(sum==0)
    return 1;
        
    if(dp[n][sum]!=-1)
    return dp[n][sum];
        
    if(coins[n-1]<=sum)
    return dp[n][sum]=numberOfWays(coins,n,sum-coins[n-1])+numberOfWays(coins,n-1,sum);
        
    else if(coins[n-1]>sum)
    return dp[n][sum]=numberOfWays(coins,n-1,sum);
}
    
int main()
{
    int n;
    cin>>n;
    
    int coins[n];
    for(int i=0;i<n;i++)
    cin>>coins[i];
    
    int sum;
    cin>>sum;
    
    memset(dp,-1,sizeof(dp));
    
    numberOfWays(coins,n,sum);
    cout<<dp[n][sum];
    
    return 0;
}
