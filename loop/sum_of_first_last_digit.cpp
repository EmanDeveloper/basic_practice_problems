#include<iostream>
using namespace std;
int main(){
int num,sum,firstdigit,lastdigit;
cout<<"enter the number\n";
cin>>num;
firstdigit=num;
lastdigit=num%10;/*here modulo give last dugit mean 1234%10 give 4*/
while(num>10){
    num=num/10;/*here n/10 give 12 from 123 and loop is again run and it give now 1 form 12*/
}
firstdigit=num;
sum=firstdigit+lastdigit;
cout<<"sum = "<<sum;
return 0;
}