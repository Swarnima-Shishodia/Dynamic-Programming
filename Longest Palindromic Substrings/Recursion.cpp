#include <iostream>
using namespace std;

bool check(int i, int j, string s)
{
    if(s[i]!=s[j])
    return false;
    
    if(i<=j)
    return true;
    
    if(s[i]==s[j])
    return check(i+1,j-1,s);
}

int main()
{
    string s;
    cin>>s;
    
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
