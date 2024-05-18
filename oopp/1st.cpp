#include<iostream>
using namespace std;
class first{
    int width,hight;
    public:
    void getdata(){
        cout<<"Enetr the value of weidth and hight\n";
        cin>>width>>hight;
    }
    int area(){
        return width*hight;
    }
    int primeter(){
        return 2*(width+hight);
    }
};
int main(){
    first aa;
    aa.getdata();
    cout<<"Area is = "<<aa.area();
    cout<<"\nPrimeter is = "<<aa.primeter();
return 0;
}