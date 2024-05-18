//write a every character of string enter by the user
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name\n";
    getline(cin,name);
    cout<<"Name = "<<name<<endl;
    for(int i=0;i<=name.length();i++){
        cout<<name[i]<<endl;
    }
return 0;
}