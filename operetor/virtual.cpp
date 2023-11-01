#include <iostream>

using namespace std;

class Pet
{
    public:
    virtual void print()
    {
        cout << "Sound Of Pet" ;
    }
};

class DOg : public Pet
{
    public:
    void print() override
    {
        cout << "Dog Barks";
    }

};

class Cat : public Pet
{     
    public:
    void print() override
    {
        cout << "  Cat Meyaooo";
    }

};

int main()
{
    Pet* mypet;

    DOg mydog;
    Cat mycat;

    mypet = &mydog;
    mypet->print();

    mypet = &mycat;
    mypet->print();
}