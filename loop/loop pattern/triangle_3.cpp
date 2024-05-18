#include<iostream>
using namespace std;
int main(){
for(int row=1;row<=5;row++){
/*here we take col<=row not we take col<=5 because when we take <=5 it give value from 1 to 5 not 1 but we require 1 for triangle so we take here i because when first loop is rrun i value is 1 and j give 1 and loop again run i value increase 2 and y print 2*/
    for(int col=1;col<=row;col++){
        cout<<col;
    }
    cout<<"\n";
}
return 0;
}