#include<iostream>
using namespace std;
int main(){
for(int row=1;row<=4;row++){
    for(int col=1;col<=4;col++){
        if(col==1 || row==4 || col==row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<"\n";
}
return 0;
}