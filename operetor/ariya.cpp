#include <iostream> 

using namespace std;


class Shape
{
    public:
    virtual void print()
    {
        cout << "Enter THe Shape :";
    }
};

class Rect : public Shape
{
    public:
    int l,h;
    virtual void print() override
    {
        cout << "ENter Rect Value :" ;
        cin >>l >> h;
        cout << "Rectangle Shape :" <<l*h<< endl;
    }
};

class Circle : public Shape
{
    public:
    int r;
    virtual void print()
    {
        cout << "ENter Radius Value :" ;
        cin >>r;
        cout << "Radius Shape :" <<2 * 3.14 * r << endl;
    }
};

class Triangle : public Shape
{
    public:
    int b,h;
    virtual void print() override
    {
        cout << "ENter Triangle Value :" ;
        cin >>b >> h;
        cout << "Triangle Shape :" << 0.5 * b * h << endl;
    }
};


class Square : public Shape
{
    public:
    int s;
    virtual void print() override
    {
        cout << "ENter Square  Value :" ;
        cin >> s;
        cout << "Square Shape :" << s * s << endl;
    }
};

int main()
{
    Shape* myshape;

    Circle c1;
    Square s1;
    Triangle t1;

    myshape = &c1;
    myshape ->print();

    
    myshape = &s1;
    myshape ->print();
    
    
    myshape = &t1;
    myshape ->print();
    
} 