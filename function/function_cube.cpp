#include <iostream>
using namespace std;
int main()
{
    int num_student, num_subject;
    cout << "Enter the total number of the student\n";
    cin >> num_student;
    cout << "Enter the total subjrct\n";
    cin >> num_subject;
    for (int i = 1; i <= num_student; i++)
    {
        double total_marks=0;
        for (int j = 1; j <= num_subject; j++)
        {
            double marks;
            cout << "Enter the marks for student : " << i << " subject : " << j << " : ";
            cin >> marks;
            total_marks = total_marks + marks;
        }
        double average_marks = total_marks / num_subject;
        cout << "Average marks for student " << i << " is = " << average_marks << endl;
    }
    return 0;
}