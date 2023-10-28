#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void seta()
    {
        cout << "enter a: ";
        cin >> a;
    }
};

class derived1 : public base
{
protected:
    int b;

public:
    void setb()
    {
        cout << "enter B: ";
        cin >> b;
    }
};

class derived2
{
protected:
    int c;

public:
    void setc()
    {
        cout << "enter C: ";
        cin >> c;
    }
};

class test : public derived1, public derived2
{
public:
    void product()
    {
        cout << "product of a, b, and c is :" << a * b * c << endl;
    }
};

int main()
{
    test t;
    t.seta();
    t.setb();
    t.setc();
    t.product();
}