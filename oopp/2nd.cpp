#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll,sub1,sub2,sub3;
    public:
    void getdata(){
        cout<<"Enter the student name : ";
        cin>>name;
        cout<<"\nEnter the student roll number : ";
        cin>>roll;
        cout<<"\nEnter the marks of student in subject 1 : ";
        cin>>sub1;
        cout<<"\nEnter the marks of student in subject 3 : ";
        cin>>sub2;
        cout<<"\nEnter the marks of student in subject 2 : ";
        cin>>sub3;
    }
    int average(){
        return (sub1+sub2+sub3)/3;
    }
    void putdata(){
        cout<<"Student Name  = "<<name<<endl;
        cout<<"Student roll number = "<<roll<<endl;
        cout<<"Subject 1 marks = "<<sub1<<"\t"<<"Subject 2 marks = "<<sub2<<"\t"<<"Subject 3 marks = "<<sub3<<endl;
        cout<<"Average marks = "<<average();
    }

};
int main(){
    student aa;
    aa.getdata();
    aa.putdata();
return 0;
}