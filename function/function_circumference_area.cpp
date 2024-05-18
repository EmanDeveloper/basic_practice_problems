#include <iostream>
using namespace std;
int circumference(float pi, int radius);
int area(float pi, int radius);
int main()
{
    float pi;
    int radius;
    cout << "Enter the value of radius and pi\n";
    cin >> pi >> radius;
    cout << "Circumference = " << circumference(pi, radius) << endl;
    cout << "area is = " << area(pi, radius);
    return 0;
}
int circumference(float pi, int radius)
{
    int circumference = 2 * pi * radius;
    int area = pi * radius * radius;

    return circumference;
    return area;
}
int area(float pi, int radius)
{
    int area = pi * radius * radius;
    return area;
}