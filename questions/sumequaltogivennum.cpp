class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int ans=0;
        map<int,int>m;
        
        for(int i=0;i<n;i++){
            int b=k-arr[i];
            if(m[b]){
                ans+=m[b];
            }
            m[arr[i]]++;
        }
        return ans;
    }
};