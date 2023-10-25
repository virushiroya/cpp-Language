#include <iostream>
using namespace std;

class triangle
{
    int bes, height;
public:
    triangle()  
    {
        int b = bes, h = height;
    }
        void area(int b, int h)
        {
            cout<<0.5*b*h<<endl;;
        }
        void circ(int b, int h)
        {
            cout<<3*b<<endl;
        }
    
    

         
};

int main()
{
    int a,b;
    cout << "enter a value b:- ";
    cin >> a;
    cout << "enter a value h:- ";
    cin >> b;

     triangle t1;
     t1.area(a,b);
     t1.circ(a,b);
     return 0;
}