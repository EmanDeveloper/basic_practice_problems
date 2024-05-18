#include<iostream>
using namespace std;
int main(){
int n,sum;
sum=0;
cin>>n;
cout<<"n = "<<n<<endl;

while(n>0){
/*here modules on n give last number of digit like modules of 123 give 3 this process is run until the valu of n acordiding to given condition*/
    sum=sum+n%10;/*here sum value is 0 n%10=3 so it give first 3 and the loop is again run it give 3+2=5 and again given condition first check and loop is again run and it now give sum of 3+2+1=6*/
    n=n/10;/*when n is divided by 10 like 123 it give 12.3 and n is a interger type so it leve .3 and give 12<---now we can say modlu give last digit and n/10 leve last digit -->now loop is again run but now n valu is 23*/
}
cout<<"sum = "<<sum;
return 0;
}