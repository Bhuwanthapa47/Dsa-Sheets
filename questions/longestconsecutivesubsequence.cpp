class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
     sort(arr,arr+N);
     int cnt=1;
     int lastsmallest=INT_MIN;
     int longest=1;
     
     for(int i=0;i<N;i++){
        if(arr[i]-1==lastsmallest){
            cnt++;
            lastsmallest=arr[i];
        }
        else if (lastsmallest!=arr[i]){
         cnt=1;
         lastsmallest=arr[i];
        }
        longest=max(longest,cnt);
     }
     return longest;
    }
};