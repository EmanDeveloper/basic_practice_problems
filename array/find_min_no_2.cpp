#include <iostream>
using namespace std;
int main()
{
     int arr[8] = {1, 5, 8, 9,0, 2, -1, 89};
    int min=arr[0];
    for (int i = 0; i <8; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min;
    return 0;
}