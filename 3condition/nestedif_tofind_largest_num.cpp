#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the number"<<endl;
cin>>a;
cin>>b;
if(a>b){
    if(b>a){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"the b is small"<<endl;
    }
    cout<<"the a is greater"<<endl;
}
else{
    cout<<"a is smaller"<<endl;
}
return 0;
}