class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    int pre=1;
	    int suff=1;
	    int maxfar=INT_MIN;
	    
	    for(int i=0;i<n;i++){
	     if(pre==0){
	         pre=1;
	     }
	     if(suff==0){
	         suff=1;
	     }
	        pre*=arr[i];
	        suff*=arr[n-i-1];
	       maxfar=max(maxfar,max(pre,suff));
	    }
	    return maxfar;
	}
};