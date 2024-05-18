#include<iostream>
using namespace std;
//the number enter by the user is even or odd
int main(){
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"the number n is evev"<<endl;
    }
    else{
        cout<<"the number is odd";
    }
return 0;
}