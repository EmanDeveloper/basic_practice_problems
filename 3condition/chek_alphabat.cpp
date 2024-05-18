#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"enter the value of x "<<endl;
    cin>>x;
    if (x>='a' && x<='z' || x>='A' && x<='Z'){
        cout<<"the given value of x is charcther\n";
    }
    else{
        cout<<"the given value of x is not charcther";
    }
return 0;
}