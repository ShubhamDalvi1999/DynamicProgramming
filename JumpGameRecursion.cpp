//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    int helper(int i, int A[], int N)
    {
        if(A[i]==0 && i==0) //makes sure A[i] is non zero at i=0
        {
            return 0;
        }
        else if( A[i]+i >= N ) //if from i u can reach end return
        {
            return 1;
        }
        else  //else check for 1 to A[i] possibilities
        {
             
            for(int leap=1;leap<=A[i];leap++)
            {
                if(helper(i+leap,A,N))
                {
                    cout<<A[i+leap]<<" ";
                    return 1;
                }
                //cout<<A[i+leap]<<" "<<endl;
            }
            return 0;
            
        }
            
    }
  
    int canReach(int A[], int N) {
        // code here
        int i=0;
        int ans=helper(i,A,N);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        int N=12;
        int A[N]={5 ,9, 3 ,2 ,1 ,0 ,2 ,3 ,3 ,1 ,0 ,0};
        

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    // }
    return 0;
}
// } Driver Code Ends