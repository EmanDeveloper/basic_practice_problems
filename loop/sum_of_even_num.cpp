#include<iostream>
using namespace std;
int main(){
int i,num,sum;
sum=0;
cout<<"num = "<<endl;
cin>>num;
for(int i=0;i<=num;i+=2){
    sum=sum+i;
}
cout<<"sum = "<<sum;
 return 0;
}