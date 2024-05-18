#include <iostream>
using namespace std;
int sum(int a, int b);
void name();
int main()
{
    int num1, num2;
    cout << "Enter the vaalue of num1 and num2\n";
    cin >> num1 >> num2;
    cout << "Sum = " << sum(num1, num2) << endl;
    name();
    return 0;
}
int sum(int a, int b)
{
   int c = a + b;
    return c;
}
void name()
{
    cout << "MY name is M Eman" << endl;
}