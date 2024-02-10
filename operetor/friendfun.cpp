#include<iostream>


using namespace std;


class rect
{
    friend rect add(rect, rect, rect, rect);
    int l, w;

    public:
    void setdata(int a, int b)
    {
        l = a, w = b;
    }
    int getaree()
    {
        return l * w;
    }
};
rect add(rect m, rect n, rect x, rect y)
{
    rect t;
    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;                                  
    return t;
}
int main()
{
    rect a, b, c, d, e;
    a.setdata(2, 3);
    cout << "area of rectangle A is :" << a.getaree() << endl;   
    b.setdata(5, 6);
    cout << "area of rectangle B is :" << b.getaree() << endl;
    d.setdata(2, 4);
    cout << "area of rectangle D is :" << d.getaree() << endl;
    e.setdata(5, 6);
    cout << "area of rectangle E is :" << e.getaree() << endl;
    c=add(a, b, d, e);
    cout << "area of rectangle C is :" << c.getaree() << endl;

}