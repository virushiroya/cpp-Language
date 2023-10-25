#include<iostream>

using namespace std;

class circle
{

    int r;
    public:

    circle(int a)
    {
        r=a; 
        cout << 3.14 * r * r << endl;
    }
    void cir1(int b)
    {
        r=b;
        cout << 3.14*r << endl;
    }                                         
    ~circle()
    {
        cout << "viro" << endl;
    }

};

int main()
{
    int r;
    cout<<"enter the value of r:";
    cin>>r;

    circle p1(r);
    p1.cir1(r);
    
    return 0;
}