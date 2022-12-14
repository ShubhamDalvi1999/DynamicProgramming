    
    /*The Cricket World Cup 2015 is nearing and it will be held in Australia and New Zealand. The organizing committee is planning to give a welcome gift to each team member. After careful thought and planning, they have decided on Matryoshka dolls. 

A Matryoshka doll refers to a set of wooden dolls of strictly decreasing size, placed one inside the other. Any doll can contain only one doll directly inside it.

Given the sizes of N dolls, output "YES" if it is possible to nest them all and have one doll on the outside and "NO" otherwise.

Input -
The input starts with T denoting the number of test cases. For each test case, the first line contains N, which is the total number of dolls.
The second line contains N space separated integers denoting the size of the dolls.

Output - 
Print “YES” if the dolls can be nested inside each other and “NO” otherwise. (quotes for clarity)

Constraints -
1 <= T <= 100
1 <= N <= 100
1 <= doll size <= 1000

Sample Input - 
3
3
3 1 1
2 
1 2
4
10 2 5 3
 

Sample Output -
NO
YES
YES

Explanation -
For the first case, there are 2 dolls of size 1 and hence cannot be nested inside each other.
For the second case, the doll with size 1 can be put inside the doll with size 2.*/
    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
    	// your code goes here
    	int t;
    	cin>>t;
     
    	while(t--)
    	{	
    		int length;
    		cin >> length;
    		int a[length];
    		for(int i =0; i<length; i++)
    		{
    			cin >> a[i];
    		}
    		sort(a, a+length);
    		int count =0;
    		for(int i =0; i<length-1; i++)
    		{
    			if(a[i] == a[i+1])
    			{	count++;
    				break;}
    		}
    		if(count)
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;
    	}
    	return 0;
    }