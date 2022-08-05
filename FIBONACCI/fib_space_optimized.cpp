//Fibonacci Series using Space Optimized Method 
#include<bits/stdc++.h> 
using namespace std; 
  
int fib(int n) 
{ 
    int prev = 0, fib = 1, sum, i; 
    if( n == 0) 
        return prev; 
    for(i = 2; i <= n; i++) 
    { 
       sum = prev + fib; 
       prev = fib; 
       
       fib = sum;
    } 
    return fib; 
} 
  
// Driver code 
int main() 
{ 
    int n = 9; 
    cout << fib(n); 
    return 0; 
}