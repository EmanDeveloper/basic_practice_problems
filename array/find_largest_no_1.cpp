#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 5, 8, 9, 4, 2, 3, 89};
    int max=arr[0];
    for (int i = 0; i <8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}