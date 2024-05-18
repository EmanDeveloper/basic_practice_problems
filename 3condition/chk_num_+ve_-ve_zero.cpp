#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number\n";
cin>>n;
if(n>0){
    cout<<n<<" is a postive number\n";
}
else if(n<0){
    cout<<n<<" is a negative number\n";
}
else{
    cout<<"the vlue of x is =0";
}
return 0;
}