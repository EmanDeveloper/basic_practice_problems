#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter then number a "<<endl;
cin>>a;
cout<<"enter the number b "<<endl;
cin>>b;
cout<<"enter the number c "<<endl;
cin>>c;
if(a>b && a>c){
    cout<<"a the greater number"<<endl;
}
else if(b>a && b>c){
    cout<<"b is the greater number"<<endl;
}
else if(c>a && c>b){
    cout<<"c is the greater number "<<endl;
}
else{
    cout<<"the given number is in midle";
}
return 0;
}