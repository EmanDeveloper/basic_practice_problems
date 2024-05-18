#include<iostream>
#include<string>
using namespace std;
int main(){
string firstname;
cout<<"enetr the firstname="<<endl;
getline(cin,firstname);
string lastname;
cout<<"enter the lastname "<<endl;
getline(cin,lastname);
cout<<firstname+lastname<<endl;
//we ca also contenation strin
string fullname=firstname.append(lastname);
cout<<fullname<<endl;
string a="90";
string b="45";
cout<<a+b<<endl;
string full=a.append(b);
cout<<full;
return 0;
}