#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){
    int x,y;
    cout<<"Enter the vlaue of x and y\n";
    cin>>x>>y;
    int z=sum(x,y);
    cout<<"sum = "<<z<<endl;

return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}