#include <iostream>
using namespace std;

int longestCommonSubstr(string S1, string S2, int n, int m, int count)
{
    if(n==0 or m==0)
    return 0;
         
    if(S1[n-1]==S2[m-1])
    return longestCommonSubstr(S1,S2,n-1,m-1,count+1);
        
    else
    return max(count, max(longestCommonSubstr(S1,S2,n-1,m,0), longestCommonSubstr(S1,S2,n,m-1,0)));
        
    return count;
}

int main()
{
    string S1,S2;
    cin>>S1>>S2;
    
    int n=S1.size();
    int m=S2.size();
    
    int count=0;
    cout<<longestCommonSubstr(S1,S2,n,m,count);
    
    return 0;
}
