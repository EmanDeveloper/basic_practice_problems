#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter cheking prime number\n";
cin>>num;
int count=0;
int j=1;/*j divid on number enter by the user for cheking prime number */
while(j<=num){
    if(num%j==0)
    count++;
    j++;
}
if(count==2){
    cout<<"the given number is a prime umber\n";
}
else{
    cout<<"it is not a prime number\n";
}
return 0;
}