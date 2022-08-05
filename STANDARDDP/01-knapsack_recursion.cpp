#include<bits/stdc++.h>
using namespace std;

int knapsack(int w[],int price[],int bag_W,int arr_Size)
{
    if(arr_Size==0)
    {   return 0;}
    else if( w[arr_Size-1] <= bag_W )
    {
        int chooseToTake= price[arr_Size-1] + knapsack(w, price, bag_W-w[arr_Size-1], arr_Size-1);
        int chooseNotToTake=knapsack(w, price, bag_W, arr_Size-1);
        return max(chooseToTake,chooseNotToTake) ;
    }
    else if(w[arr_Size]>bag_W)
    {
        return knapsack(w,price,bag_W,arr_Size-1);
    }
    return 0;.
    
}
int main()
{
    int w[]={ 10, 20, 30 }; 
    int price[]= { 60, 100, 120 }; 
    int bag_w= 50;
    int arr_size=sizeof(w)/sizeof(w[0]);

    int max_profit=knapsack(w,price,bag_w,arr_size);
    cout<<max_profit;
    return 0;
}
