#include <iostream>
using namespace std;
int main()
{
    int num_student, num_subject;
    cout << "Enter the total number of students = ";
    cin >> num_student;
    cout << "Enter the total subject = ";
    cin >> num_subject;
    for (int i = 1; i <= num_student; i++)
    {
        float total_marks = 0;
        for (int j = 1; j <= num_subject; j++)
        {
            float marks;
            cout << "Enter the marks for student " << i << " in subject " << j << " = ";
            cin >> marks;
            total_marks = total_marks + marks;
        }
        float average = total_marks / num_subject;
        cout << "Average marks for student " << i << " is = " << average << endl;
    }
    return 0;
}
