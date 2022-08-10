//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


//self coded
// } Driver Code Ends
class Solution {
  public:
    
    long long int helper(int indx,int arr[],int arr_size, int target_sum )
    {
        if( target_sum==0 ) 
            return 1;
        if( target_sum <0) 
            return 0;
        if( indx> arr_size-1)
            return 0;
        
        
        long long int take= helper(indx, arr, arr_size, target_sum-arr[indx]);
        
        long long int nottake= helper(indx+1, arr, arr_size, target_sum);
        
        return take+nottake;
        
    }
  
    long long int count(int S[], int m, int n) {
        
        // code here.
        sort(S,S+m);
        long long int ans;
        ans= helper(0,S,m,n);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}
// } Driver Code Ends