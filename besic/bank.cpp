#include <iostream>

using namespace std;

class bank
{
    int acc;
    char nam[100];
    float bal;

public:
    bank(int acc_no, char *name, float balance)
    {
        acc = acc_no;
        bal = balance;
    }

    void deposite()
    {
        int Deposit;
        cout << "Enter Deposit Amount = "; 
        cin >> Deposit;
        bal += Deposit;
    }
    void withdra()
    {
        int Withdra;
        cout << "Enter Withdra Amount = ";
        cin >> Withdra;
        if (Withdra > bal)
            cout << "\n Cannot Withdra Amount";
        bal -= Withdra;
    }
    void display()
    {
        cout << "\n -";
        cout << "\n Accout No. : " << acc;
        cout << "\n Name : " << nam;
        cout << "\n Balance : " << bal << endl;
    }

    ~bank()
    {
        cout << " Thank you " << endl;
    }
};

int main()
{
    int acc_no;
    char name[100];
    float balance;

    cout << "\n Accout No. ";
    cin >> acc_no;
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Balance : ";
    cin >> balance;

    bank b1(acc_no, name, balance);
    b1.deposite();
    b1.withdra();
    b1.display();

    return 0;
}
