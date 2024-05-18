#include<iostream>
using namespace std;
int main(){
    int a[3][2]={{1,2},{3,4},{5,6}};
    int b[2][3]={{1,2,3},{4,5,6}};
    cout<<"Matrix A"<<endl;
    for(int i=0l;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrix B"<<endl;
    for(int i=0l;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrix Multiplication"<<endl;
    int sum;
    for(int i=0l;i<3;i++){// here i give nunber of row of first matrix
        for(int j=0;j<3;j++){// here j give number of colum of secind matrix
            sum=0;
            for(int k=0;k<2;k++){// her k give number of colum of first matrix
                sum=sum+a[i][k]*b[k][j];
            }
            cout<<sum<<"\t";
            
        }
        cout<<endl;
    }
return 0;
}