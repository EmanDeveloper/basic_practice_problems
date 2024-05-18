#include<iostream>
using namespace std;
int main(){
    for(int x=1;x<=5;x++){
        for(int y=1;y<=5-x;y++){
            cout<<" ";
        }
        for(int z=1;z<=x*2-1;z++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
return 0;
}