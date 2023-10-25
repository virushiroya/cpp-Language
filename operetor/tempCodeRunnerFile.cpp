
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