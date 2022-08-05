#include<bits/stdc++.h>
using namespace std;


int countIncreasing(int arr[], int n)
{
    int cnt=0;

    int len=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])
          len++;
        else
        {
            cnt+=( (len-1)*len )/2;
            len=1;
        }
        
    }
    if(len>1)
    {cnt+=( (len-1)*len )/2;}
    return cnt;
}

int main()
{
    int arr[]={2,3,4,5,6,0,2,4};
    
    int count=countIncreasing(arr,8);
    cout<<count<<endl;
    cout<<"OHHH SOOO SILLY!";
    return 0;
}
