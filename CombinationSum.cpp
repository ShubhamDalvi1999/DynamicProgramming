//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
   void helper(int indx,int target,vector<int> &ds,vector<vector<int>> &ans,vector<int> &A)
    {
           //Base case : whn u reach end of vector and targetsum =0 it is valid ds 
           if(indx==A.size())
           {
               if(target==0)
                    ans.push_back(ds);
                return ;
           }
           
           //Picking element which is less or equal to target
           if(A[indx]<=target)
           {
               ds.push_back(A[indx]);
               helper(indx,target-A[indx],ds,ans,A);
               ds.pop_back();
           }
           
           helper(indx+1,target,ds,ans,A);
           
    }
    
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> ans; //vector of vector 
        vector<int> ds;
        sort( A.begin(), A.end() );
        set<int> s;
        for(int i:A)
        {
            s.insert(i);
        }
        vector<int> filtered_A;
        for(int i:s)
        {
            filtered_A.push_back(i);
        }
        helper(0,B,ds,ans,filtered_A);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends