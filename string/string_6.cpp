//check the s1 and s2 string enter by the user is equal or not
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the value of s1 and s2\n";
    getline(cin,s1);
    getline(cin,s2);
    cout<<s1<<endl<<s2<<endl;
    bool check=s1==s2;
    cout<<check;
return 0;
}