#include <bits/stdc++.h>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z)
    {
        if(n==0)
        return 0;
        if(n<0)
        return INT_MIN;

        int a=maximizeTheCuts(n-x,x,y,z)+1;
        int b=maximizeTheCuts(n-y,x,y,z)+1;
        int c=maximizeTheCuts(n-z,x,y,z)+1;
         return max(max(a,b),c);
    }
    
int main()
{
    int n,x,y,z;
    cin>>n;
    cin>>x>>y>>z;
    cout<<maximizeTheCuts(n,x,y,z);
    return 0;
}
