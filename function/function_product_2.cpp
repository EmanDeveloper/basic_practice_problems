#include <iostream>
using namespace std;
int product(int a, int b);
int main()
{
    int num1, num2;
    cout << "enter the value of num1 and num2\n";
    cin >> num1 >> num2;
    cout << "product is = " << product(num1, num2) << endl;
    return 0;
}
int product(int a, int b)
{
    int product = a * b;
    return product;
}