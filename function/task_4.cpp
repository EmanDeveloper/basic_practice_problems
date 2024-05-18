#include<iostream>
using namespace std;
float calculateretail(int whole_sale,float market_percent);
int main(){
    int w_s;
    float m_p;
    cout<<"Enetr the whole sale rate and retail price\n";
    cin>>w_s;
    cin>>m_p;
    cout<<calculateretail(w_s,m_p);
return 0;
}
float calculateretail(int whole_sale,float market_percent){
    float retail_price=whole_sale+(whole_sale*market_percent);
    return retail_price;
}