#include <bits/stdc++.h>
using namespace std;

 long long numberOfWays(int coins[],int n,int sum)
{
    if(n==0)
    return 0;
    
    if(sum==0)
    return 1;
        
    if(coins[n-1]<=sum)
    return numberOfWays(coins,n,sum-coins[n-1])+numberOfWays(coins,n-1,sum);
        
    else if(coins[n-1]>sum)
    return numberOfWays(coins,n-1,sum);
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
