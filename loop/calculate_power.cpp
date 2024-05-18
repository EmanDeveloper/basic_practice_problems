#include<iostream>
using namespace std;
int main(){
  
/*x=2
  y=3
  2^3=8*/
  //first we take x and y value;
  int x,y;
  cout<<"enter the value of x and y "<<endl;
  cin>>x>>y;
  /*now we take product variable which give product*/
  int product=1;
  /*now we run a loop which give answer of x^y*/
  int i=1;
  while(i<=y){
    product=product*x;//here get same as wen we take sum of digit
    i++;
  }
  cout<<product;
return 0;
}