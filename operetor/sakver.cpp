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