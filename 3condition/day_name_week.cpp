#include<iostream>
using namespace std;
int main(){
int week;
cout<<"enter the week\n";
cin>>week;
if(week==1){
    cout<<"Monday"<<endl;
}
else if(week==2){
    cout<<"tusday"<<endl;
}
else if(week==3){
    cout<<"Wednesday"<<endl;
}
else if(week==4){
    cout<<"Thursday"<<endl;
}
else if(week==5){
    cout<<"Friday"<<endl;
}
else if(week==6){
    cout<<"Saturday"<<endl;
}
else if(week==7){
    cout<<"Sunday"<<endl;
}
else{
    cout<<"not a vild day"<<endl;
}

return 0;
}