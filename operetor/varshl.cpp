#include <iostream>
using namespace std;

class Pet
{
    public:
    void Setpet()
    {
        cout << "THIs Is Pet";
    }
};

class DOg : public Pet
{
    void virtual SetDOg()
    {
        cout << "DOg AUdio Bhav-Bhav" << endl;  
    }

};

class Cat : public Pet
{
    void virtual SetCat()
    {
        cout << "Cat AUdio Meyawoo" << endl;  
    }

};

int main()
{
    
}