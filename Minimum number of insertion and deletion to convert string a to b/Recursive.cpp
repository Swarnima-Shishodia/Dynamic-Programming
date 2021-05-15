#include <bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int m, int n)
{
	if(m==0 or n==0)
	return 0;
	   
	if(a[m-1]==b[n-1])
	return 1+lcs(a,b,m-1,n-1);
	   
	else if(a[m-1]!=b[n-1])
	return max(lcs(a,b,m-1,n), lcs(a,b,m,n-1));
}

int main()
{
    string S1,S2;
    cin>>S1>>S2;
    
    int m=S1.size();
    int n=S2.size();
    
    int l=lcs(S1,S2,m,n);
    
    cout<<(m-l+n-l)<<endl;
    
    return 0;
}
