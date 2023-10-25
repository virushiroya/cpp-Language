#include<iostream>

using namespace std;

class solid
{
    int redius;
    int bes , hei;

    public:
    solid()
    {
        int r = redius; 
    }
        int area(int r)
        {
            cout<<3.14*r*r<<"\n";
        }
 
    solid(int bes, int hei)
    {
        int b = bes , h = hei;
    }
        int area(int b , int h)
        {
            cout<<0.5*b*h<<endl;;
        }

};

int main()
{
    int a,b,h;


    cout<<"Enter a valu of a :";
    cin>>a;

    cout<<"Enter a valu of b,h :";
    cin>>b>>h;

    solid sp;
    solid ss;
    sp.area(a);
    ss.area(b,h);
}