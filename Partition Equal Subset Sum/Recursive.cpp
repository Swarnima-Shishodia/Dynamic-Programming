#include <bits/stdc++.h>
using namespace std;


int subset(int arr[],int N,int sum)
{
    if(sum==0)
    return 1;
    
    if(N==0)
    return 0;
       
    if(arr[N-1]<=sum)
    return max(subset(arr,N-1,sum-arr[N-1]), subset(arr,N-1,sum));
    else if(arr[N-1]>sum)
    return subset(arr,N-1,sum);       
}
    
int equalPartition(int N, int arr[])
{
    int s=0;
    for(int i=0;i<N;i++)
    s=s+arr[i];
        
    if(s%2!=0)
    return 0;

    return subset(arr,N,s/2);
}
    
int main()
{
    int N;
    cin>>N;
    
    int arr[N];
    for(int i=0;i<N;i++)
    cin>>arr[i];
    
    cout<<equalPartition(N,arr);
    
    return 0;
}
