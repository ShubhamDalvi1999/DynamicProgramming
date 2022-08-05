#include<bits/stdc++.h>
using namespace std;

void permute(string str,int fixindex,int end)
{
     if(fixindex  ==  end)
        cout<<str<<endl;
    else
    {
        /* code */
         for(int i=0;i<=end;i++)
        {
            swap(str[i],str[fixindex]); 
            /*for the fixing all elements of str
             one by  at the first position*/
            permute(str,fixindex+1,end); 
            //permutation for the next index keeping the first constant
            swap(str[i],str[fixindex]); 
            //restoring each ele at the prev position <BACKTRACKING>
        }
    }    
}
int main()
{
    string str='ABCD';
    int len=str.length;
    cout<<len;
    permute(str,0,len-1);
    return 0;
}