#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)//swap function
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void dnf_sort(int arr[],int n )
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
         if(arr[mid]==0)
         {
            swap(arr,low,mid);
            low++; mid++;
         }
         else if(arr[mid]==1)
         {
            mid++;
         }
         else
         {
            swap(arr,mid,high);
            high--;
         }
    }
}
int main()
{
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "After sorting the elements are:\n";
    dnf_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}