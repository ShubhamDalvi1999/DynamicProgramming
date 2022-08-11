class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 1;
        int posiblt1=climbStairs(n-1);
        int posiblt2=climbStairs(n-2);
        
        return posiblt1+posiblt2;
        
    }
};