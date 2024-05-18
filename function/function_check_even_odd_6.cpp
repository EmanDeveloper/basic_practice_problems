#include<iostream>
using namespace std;
void even_odd(int n);
int main(){
    int number;
    cout<<"Enetr the value of number\n";
    cin>>number;
    even_odd(number);
return 0;
}
void even_odd(int n){
    if(n%2==0){
        cout<<n<<" even number\n";
    }
    else{
        cout<<n<<" odd number\n";
    }
}