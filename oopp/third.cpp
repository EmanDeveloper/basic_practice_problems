#include <iostream>
using namespace std;
class bank
{
    int account_num, account_balnce;

public:
    int selection, deposit_money, withdraw_money;
    void getdata()
    {
        cout << "Enter the Account number and Account balance\n";
        cin >> account_num >> account_balnce;
        cout << "Enter 1 for deposite money\n";
        cout << "Enetr 2 for withdraw money\n";
        cin >> selection;
    }
    void information()
    {
        if (selection == 1)
        {
            cout << "Enetr the deposite money\n";
            cin >> deposit_money;
            cout << "Account number = " << account_num << endl;
            cout << "Account balance = " << account_balnce << endl;
            account_balnce += deposit_money;
            cout << "New account balance after deposite money = " << account_balnce << endl;
        }
        else
        {
            cout << "Enter withdraw money\n";
            cin >> withdraw_money;
            cout << "Account number = " << account_num << endl;
            cout << "Account balance = " << account_balnce << endl;
            account_balnce -= withdraw_money;
            cout << "New account balance after withdraw money money = " << account_balnce << endl;
        }
    }
};
int main()
{
    bank aa;
    aa.getdata();
    aa.information();
    return 0;
}