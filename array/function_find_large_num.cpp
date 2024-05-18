#include<iostream>
using namespace std;
int large_num(int arr[],int n);
int main(){
    int n=5;
    int arr[n]={20,10,20,40,100};
    cout<<large_num(arr,n);

return 0;
}
int large_num(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}