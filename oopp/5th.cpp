#include<iostream>
using namespace std;
class area{
    int radius;
    public:
    const float pi=3.14;
    void getdata(){
        cout<<"Enter the value of radius of circul\n";
        cin>>radius;
    }
    friend double final(area aa);
};
double final(area aa){
    return aa.pi*aa.radius*aa.radius;
}
int main(){
    area aa;
    aa.getdata();
    cout<<"Area of the circul is = "<<final(aa)<<endl;
return 0;
}