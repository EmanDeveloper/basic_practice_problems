#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    bool found = false;

    for (int i = 0; i < 5 ;i++) {
        if (arr[i] == userInput) {
            found = true;
            break;
        }
    }

    if (found) {
         cout << "The number is in the array." << endl;
    } 
    else {
        cout << "The number is not in the array." <<endl;
    }

    return 0;
}
