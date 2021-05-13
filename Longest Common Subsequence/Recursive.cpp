#include <iostream>
using namespace std;

 int lcs(int x, int y, string s1, string s2)
    {
        if(x==0 or y==0)
        return 0;
        
        if(s1[x-1]==s2[y-1])
        return 1+lcs(x-1,y-1,s1,s2);
        
        else if(s1[x-1]!=s2[y-1])
        return max(lcs(x,y-1,s1,s2), lcs(x-1,y,s1,s2));
    }
    
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    int x=s1.size();
    int y=s2.size();
    
    cout<<lcs(x,y,s1,s2);
    
    return 0;
}
