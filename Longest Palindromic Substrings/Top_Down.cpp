#include<bits/stdc++.h>
using namespace std;

int dp[10001][1001];
bool check(int i, int j, string s)
{
    if(s[i]!=s[j])
    return false;
    
    if(i<=j)
    return true;
    
    if(dp[i][j]!=-1)
    return true;
    
    if(s[i]==s[j])
    return dp[i][j]=check(i+1,j-1,s);
}

int main()
{
    string s;
    cin>>s;
    
    int n=s.size();
    dp[n+1][n+1];
    memset(dp,-1,sizeof(dp));
    
    for(int i=0;i<=n;i++)
    dp[i][i]=1;
    
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(check(i,j,s))
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
