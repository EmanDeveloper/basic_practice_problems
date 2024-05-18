#include<iostream>
using namespace std;
int main(){
char c;
cout<<"enter c\n";
cin>>c;
if(c>='a' && c<='z'){
    cout<<c<<" is lower case"<<endl;
}
else{
    cout<<c<<" is uper case"<<endl;
}
return 0;
}