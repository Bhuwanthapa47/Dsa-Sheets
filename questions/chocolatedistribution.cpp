class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    long long ans;
    int min=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i+m-1<n;i++){
        int j=i+m-1;
        int diff=a[j]-a[i];
        if(diff<min){
            min=diff;
        }
        
    }
    return min;
    }   
};

