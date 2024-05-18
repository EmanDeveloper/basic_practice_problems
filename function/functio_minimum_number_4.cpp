#include<iostream>
using namespace std;
void minimum_number(int a,int b,int c);
int main(){
    int n1,n2,n3;
    cout<<"Enter the value of n1 n2 and n3\n";
    cin>>n1>>n2>>n3;
    minimum_number(n1,n2,n3);
return 0;
}
void minimum_number(int a,int b,int c){
    if(a<b && a<c){
        cout<<"a is smallest number = "<<a;
    }
    else if(b<a && b<c){
        cout<<"b is smallest = "<<b;
    }
    else{
        cout<<"c is smallest = "<<c;
    }
}