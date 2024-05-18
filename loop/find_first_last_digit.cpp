#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,lastdigit;
    cout<<"enter the number\n";
    cin>>num;
    lastdigit=num%10;
    while(num>=10){
        num=num/10;
    }
    cout<<"firstdigit "<<num<<endl;
    cout<<"lastdigit "<<lastdigit;

    return 0;
}