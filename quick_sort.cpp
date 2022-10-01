#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)//swap function
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r)//partiotion function 
{
    int pivot = arr[r];//pivot element
    int i = l - 1;//index of the pivot element
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void sort(int arr[], int l, int r)//the quick_sort function
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        sort(arr, l, pi - 1);
        sort(arr, pi + 1, r);
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
    sort(arr, 0, n - 1);
    cout << "After sorting the array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;
}