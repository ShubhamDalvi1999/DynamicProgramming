#include <iostream>
using namespace std;
#define MAX 200
//recursion
// int fib(int pos){
//     if(pos==1)
//         return 0;
//     if(pos==2)
//         return 1;
//     return fib(pos-1)+fib(pos-2);
// }

//top down approach - Memoization in DP
int memory[MAX];
void initArr()
{
    for (int i = 0; i < MAX; i++)
        memory[i] = -1;
}
int fib(int pos)
{
    if (memory[pos - 1] != -1)
    {
        return memory[pos - 1];
    }
    else
    {
        int ans;
        if (pos == 1)
            ans = 0;
        else if (pos == 2)
            ans = 1;
        else
            ans = fib(pos - 1) + fib(pos - 2);
        memory[pos - 1] = ans;
        return memory[pos - 1];
    }
}
int main()
{
    initArr();
    cout << fib(5);
}