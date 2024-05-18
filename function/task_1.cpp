#include<iostream>
using namespace std;
void getdetail();
int lowest(char a,char b,char c,char d,float a1,float a2,float a3,float a4);
int main(){
    
    getdetail();

return 0;
}
void getdetail(){
    char a,b,c,d;
    cout<<"Enter the region\n";
    cin>>a>>b>>c>>d;
    float t1,t2,t3,t4;
    cout<<"enter the temperature of region\n"<<a<<b<<c<<d<<endl;
    cin>>t1>>t2>>t3>>t4;
    float a1=t1,a2=t2,a3=t3,a4=t4;
    lowest(a,b,c,d,a1,a2,a3,a4);
}
int lowest(char a,char b,char c,char d,float a1,float a2,float a3,float a4){
    if(a1<a2 && a1<a3 && a3<a4){
        cout<<a<<" have lowest temperature "<<a1<<endl;
    }
    else if(a2<a1 && a2<a3 && a3<a4){
        cout<<b<<" have lowest temperature "<<a2<<endl;
    }
    else if(a3<a1 && a3<a2 && a3<a4){
        cout<<b<<" have lowest temperature "<<a3<<endl;
    }
    else{
        cout<<c<<" have lowest temperature "<<a4<<endl;
    }
    return 0;
}