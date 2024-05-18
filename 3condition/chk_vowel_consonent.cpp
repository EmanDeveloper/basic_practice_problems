#include<iostream>
using namespace std;
int main(){
char c;
cout<<"enter c"<<endl;
cin>>c;
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
    cout<<c<<" is a vowel letter"<<endl;
}
else{
    cout<<c<<" is a cosonent";
}
return 0;
}