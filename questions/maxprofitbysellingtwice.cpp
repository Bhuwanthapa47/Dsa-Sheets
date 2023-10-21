int maxProfit(vector<int>&price){
   int n=price.size();
   
   int *profit=new int[n];
   for(int i=0;i<price.size();i++){
       profit[i]=0;
   }
   
   int maxprice=price[n-1];
   for(int i=n-2;i>0;i--){
       if(price[i]>maxprice){
           maxprice=price[i];
       }
          profit[i]=max(profit[i+1],maxprice-price[i]);
   }
   
   int minprice=price[0];
   for(int i=0;i<n;i++){
       if(minprice>price[i]){
           minprice=price[i];
       }
       profit[i]=max(profit[i-1],profit[i]+(price[i]-minprice));
   }
   return profit[n-1];
   delete [] profit;
}