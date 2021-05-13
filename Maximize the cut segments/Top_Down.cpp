#include <bits/stdc++.h>
using namespace std;

int dp[10001];
int maximizeTheCuts(int n,int x,int y,int z)
{
    if(n==0)
    return 0;
    
    if(n<0)
    return INT_MIN;
    
    if(dp[n]!=-1)
    return dp[n];
    
    int a=maximizeTheCuts(n-x,x,y,z)+1;
    int b=maximizeTheCuts(n-y,x,y,z)+1;
    int c=maximizeTheCuts(n-z,x,y,z)+1;
    return dp[n]=max(max(a,b),c);
}
    
int main()
{
    int n,x,y,z;
    cin>>n;
    cin>>x>>y>>z;
    memset(dp,-1,sizeof(dp));
    
    maximizeTheCuts(n,x,y,z);
    
    int ans=dp[n];
    if(ans<0)
        ans=0;
        
    cout<<ans<<endl;
    return 0;
}
