#include<iostream>
#include<string>
using namespace std;
class car{
    string car_make,car_model;
    int year;
    public:
    void getdata(){
        cout<<"Enter car making company : ";
        cin>>car_make;
        cout<<"\nEnter car model : ";
        cin>>car_model;
        cout<<"\nEnter the year of car : ";
        cin>>year;

    }
    void putdata(){
        cout<<"\n";
        cout<<"Car company is = "<<car_make<<endl;
        cout<<"Car model is = "<<car_model<<endl;
        cout<<"Car buy year is = "<<car_make<<endl;
    }
};
int main(){
    car aa;
    aa.getdata();
    aa.putdata();
return 0;
}