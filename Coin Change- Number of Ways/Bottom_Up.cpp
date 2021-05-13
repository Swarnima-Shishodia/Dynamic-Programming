#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
    
long long numberOfWays(int coins[],int n,int sum)
{
    int dp[n+1][sum+1];
        
    for(int i=0;i<n+1;i++)
    dp[i][0]=1;
        
    for(int i=0;i<sum+1;i++)
    dp[0][i]=0;
        
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(coins[i-1]<=j)
            dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
        
            else if(coins[i-1]>j)
             dp[i][j]=dp[i-1][j];
        }
    }
        
    return dp[n][sum];
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
    
    cout<<numberOfWays(coins,n,sum);
    
    return 0;
}
