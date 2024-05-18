#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,4,3,5,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool check = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            check = false;
            break;
        }
    }
    
    if (check) {
        cout << "ascending order." << endl;
    } else {
        cout << "no ascending order." << endl;
    }
    
    return 0;
}
