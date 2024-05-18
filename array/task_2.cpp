#include <iostream>
using namespace std;
int large(int arr[], int n);
int main()
{
    int size;
    cout<<"Enter the size of array\n";
    cin>>size;
    cout<<"Enetrt he araay\n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"largest element in array is = "<<large(arr,size);
    return 0;
}
int large(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}