class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
       int cnt=0;
       sort(A,A+n);
       for(int i=0;i<n;i++){
          int j=i+1;
          int k=n-1;
          int sum;
          
          if(i>0 && A[i]==A[i-1]){
              continue;
          }
          
          while(j<k){
              sum=A[i]+A[j]+A[k];
              
              if(sum<X){
                j++;  
              }
              else if(sum>X){
                k--;
              }
              else{
                  return true;
              }
              
              while(j<k && A[j]==A[j-1]){
                  j++;
              }
              
              while(j<k && A[k]==A[k+1]){
                  k--;
              }
          }
       }
       return false;
    }

};