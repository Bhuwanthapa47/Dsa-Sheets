class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int maxend=arr[0];
        int maxfar=arr[0];
        for(int i=1;i<n;i++){
             maxend=max(arr[i],maxend+arr[i]);
             maxfar=max(maxfar,maxend);
        }
        return maxfar;
    }
};