#include <bits/stdc++.h>
using namespace std;

int dp[101][101];
int lcs(string X, string Y, int m, int n)
{
    if(m==0 or n==0)
    return 0;
        
    if(dp[m][n]!=-1)
    return dp[m][n];
        
    if(X[m-1]==Y[n-1])
    return dp[m][n]=1+lcs(X,Y,m-1,n-1);
        
    else if(X[m-1]!=Y[n-1])
    return dp[m][n]=max(lcs(X,Y,m-1,n),lcs(X,Y,m,n-1));
}
    
int main()
{
    string a,b;
    cin>>a>>b;
    
    int m=a.size();
    int n=b.size();
    
    memset(dp,-1,sizeof(dp));
    
    cout<<(m+n-lcs(a,b,m,n));
    
    return 0;
}
