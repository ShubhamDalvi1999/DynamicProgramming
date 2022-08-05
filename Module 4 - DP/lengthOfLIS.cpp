#include <iostream>
using namespace std;

int max(int no1, int no2)
{
    return no1 > no2 ? no1 : no2;
}
int legthOfLISEndingHere(int arr[], int cur)
{
    if (cur == 0)
        return 1;
    int length = 1;
    for (int i = cur - 1; i >= 0; i--)
    {
        if (arr[cur] > arr[i])
        {
            length = max(length, 1 + legthOfLISEndingHere(arr, i));
        }
    }
    return length;
}
int largestLenghtOfLIS(int arr[], int size)
{
    int largest = 1;
    for (int i = 0; i < size; i++)
    {
        largest = max(largest, legthOfLISEndingHere(arr, i));
    }
    return largest;
}

int maxElArr(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
int largestLenghtOfLISOpti(int arr[], int size)
{
    int lengthLIS[size];
    for (int i = 0; i < size; i++){
        lengthLIS[i]=1;
    }
    //logic to fill the lengthLIS array
    lengthLIS[0] = 1;
    for (int i = 1; i < size; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                lengthLIS[i] = max(lengthLIS[i], 1 + lengthLIS[j]);
            }
        }
    }
    return maxElArr(lengthLIS, size);
}
int main()
{
    int arr[] = {10,9,2,5,3,7,101,18};
    cout << "Length of LIS: " << largestLenghtOfLISOpti(arr, sizeof(arr) / sizeof(int)) << endl;
}