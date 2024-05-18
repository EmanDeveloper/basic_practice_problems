#include<iostream>
using namespace std;
int main(){
int x=2,y=3;
int t=x;
x=y;
y=t;
cout<<"x= "<<x<<" y= "<<y<<endl;
return 0;
}