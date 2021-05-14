#include <iostream>
using namespace std;

int lcs(string X, string Y, int m, int n)
{
    if(m==0 or n==0)
    return 0;
        
    if(X[m-1]==Y[n-1])
    return 1+lcs(X,Y,m-1,n-1);
        
    else if(X[m-1]!=Y[n-1])
    return max(lcs(X,Y,m-1,n),lcs(X,Y,m,n-1));
}
    
int main()
{
    string a,b;
    cin>>a>>b;
    
    int m=a.size();
    int n=b.size();
    
    cout<<(m+n-lcs(a,b,m,n));
    
    return 0;
}
