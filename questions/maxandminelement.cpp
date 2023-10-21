#include <iostream>
using namespace std;

int maximum(int arr[], int size)
{
    int maxi = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (maxi > arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int minimum(int arr[], int size)
{
    int mini = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (mini < arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    cout << maximum(arr, size)<<endl;
    cout << minimum(arr, size);
    return 0;
}