Dhrumil Skillqode, [24-10-2023 15:50]
#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void setdatA()
    {
        cout << "square no of number: ";
        cin >> a;
    }
};

class square : public base
{
    int i, sum;

public:
    void getdata()
    {
        for (i = 0; i < a; i++)
        {
            sum=i*i;
            cout<<sum<<" , ";
        }
    }
};

int main()
{
    square c;
    c.setdatA();
    c.getdata();
    

}

Dhrumil Skillqode, [24-10-2023 15:50]
#include <iostream>
using namespace std;
class sub
{
protected:
    int eng, guj, mah;
    public:
    void setdataA()
    {
        cout << "enter marks eng: ";
        cin >> eng;
        cout << "---------------------" << endl;
        cout << "enter marks guj: ";
        cin >> guj;
        cout << "---------------------" << endl;
        cout << "enter marks mah: ";
        cin >> mah;
        cout << "---------------------" << endl;
    }
};
class marks : public sub
{
    int total;
    double per;
    public:
    void setdataB()
    {
        total = eng + guj + mah;
        per = (total * 100) / 300;
    }
    void getter()
    {
        cout << "\n\n "<<endl; 
        cout << "total marks: " << total<<endl;
        cout << "---------------------" << endl;
        cout << "S marks: " << per;
    }
};

int main()
{
    marks c;
    c.setdataA();
    c.setdataB();
    c.getter();
}