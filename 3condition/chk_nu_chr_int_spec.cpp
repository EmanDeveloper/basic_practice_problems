#include<iostream>
using namespace std;
int main(){
char c;
cout<<"enter c\n";
cin>>c;
if(c>='a' && c<='z'){
    cout<<c<<" is a charcther\n";
}
else if (c>='0' && c<='9'){
    cout<<c<<" is a integer\n";
}
else{
    cout<<c<<" is a special charter";
}
return 0;
}