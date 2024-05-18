#include<iostream>
using namespace std;
int sum(int arr[],int n);
int main(){
    int n=4;
    int arr[n]={1,2,3,4};
    cout<<sum(arr,n);
return 0;
}
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}