public class SumofArrayofsizek {

    int calcSumOfSubArray(int arr[],int k)
    {
        int maxsum=0;
        int res=0;
        for (int j=0; j<k; j++) 
                res += arr[j];
        int curr_sum=res;

        for(int i=k;i<arr.length;i++)
        {
            curr_sum=curr_sum+arr[i]-arr[i-k];
            maxsum=Math.max(curr_sum, maxsum); 
        }
        return maxsum;
    }
    public static void main(String args[])
    {
        int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}; 
        int k = 4;
        SumofArrayofsizek s=new SumofArrayofsizek();
        
        System.out.println("the max sum is:"+s.calcSumOfSubArray(arr, k));
    }
    
}