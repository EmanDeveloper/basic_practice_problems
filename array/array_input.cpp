#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the arry size\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enetr the value of "<<i<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
return 0;
}