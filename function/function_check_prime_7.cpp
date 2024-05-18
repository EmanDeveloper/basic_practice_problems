#include<iostream>
using namespace std;
void prime(int number,int count);
int main(){
    int n,count=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    prime(n,count);
return 0;
}
void prime(int number,int count){
    for(int i=1;i<=number;i++){
        if(number%i==0)
        count++;
    }
    if(count==2){
        cout<<number<<" is a prime"<<endl;
    }
    else{
        cout<<number<<" is not prime"<<endl;
    }
}