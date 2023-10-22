void rotate(int arr[], int n)
{
    int m=n-1;
    reverse(arr,arr+m);
    reverse(arr,arr+n);
    
}