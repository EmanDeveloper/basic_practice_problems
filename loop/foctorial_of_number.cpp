#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter the value of factorial\n";
    cin>>i;
    int fact=1;
    while(i>0){
        fact=fact*i;
        i--;
    }
    cout<<"factorial is = "<<fact;
return 0;
}