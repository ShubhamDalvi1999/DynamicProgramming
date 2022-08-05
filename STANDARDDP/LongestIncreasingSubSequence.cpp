#include<bits/stdc++.h>
using namespace std;

L_I_S(int arr[],int size)
{
    int *dp=new int[size];
    int res=1;
    int max_res;
    if(size==0)
        return 0;
    for(int e=0;e<size;e++)
    {
        dp[e]=1;
    }
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]<arr[i])
            {
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
        max_res=max(res,dp[i]);
    }
    return max_res;
}
int main()
{

    int arr[]={12,4,34,69,6,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    int len=L_I_S(arr,size);
    cout<<len;
    return 0;
}