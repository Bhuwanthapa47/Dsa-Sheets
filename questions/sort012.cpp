class Solution
{
    public:
    
    void sort012(int a[], int n)
    {
        
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        int i=0;
        
         for(int i=0;i<n;i++){
             if(a[i]==0){
                 zerocount++;
             }
             else if(a[i]==1){
                 onecount++;
             }
             else{
                 twocount++;
             }
         }
         
          
         while(zerocount--){
             a[i]=0;
             i++;
         }
         
         
         while(onecount--){
             a[i]=1;
             i++;
         }
        
        while(twocount--){
            a[i]=2;
            i++;
            
        }
    
       // sort(a,a+n);
     }
    
    
};