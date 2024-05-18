#include<iostream>
using namespace std;
int main(){
/*if the sum of cube root of a number is equal to number then it is called as armstron number
like:153=1^3+5^3+3^3=153
its called as armstron number*/
int num,pro;
cout<<"enter the value of num "<<endl;
cin>>num;
int n=num;
int sum=0;
while(n>0){
    pro = n % 10;
    sum=sum+(pro*pro*pro);
    n=n/10;
}
cout<<sum;
return 0;
}