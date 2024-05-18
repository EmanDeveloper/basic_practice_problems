#include<iostream>
using namespace std;
void search(int arr[5],int element){
    int i;
    for(i=0;i<5;i++){
        if(arr[i]==element){
            cout<<"Element found\n";
            break;
            }
        
    }
    if(i==5){
            cout<<"Elemnt not found\n";
        }
}
int main(){
    int arr[5]={1,2,34,57,90};
    int n=346;
    search(arr,n);

return 0;
}