#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"enter a , b , c , and d "<<endl;
cin>>a>>b>>c>>d;
int t;
t=a;
a=d;
d=t;
cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<" d = "<<d<<endl;
return 0;
}