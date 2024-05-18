#include<iostream>
using namespace std;
int main(){
for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col==1 || col==5 || row==1 ||row==5){
/*try here insted of * first row and then colon*/
            cout<<"* ";
        }
        else{
            cout<<"^ ";
        }
    }
    cout<<"@ \n";
}
return 0;
}