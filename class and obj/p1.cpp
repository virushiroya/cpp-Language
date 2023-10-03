#include<iostream>

using namespace std;

class Circle
{
    private:
    int redius;
    public:
    int r = redius;

    void area(int r)
    {
        cout << 3.14*r*r;
    }
    void circ(int r)
    {
        cout << 2*3.14*r;
    }

};

int main()
{
    int r1;
    cin >> r1;
    Circle mycircle;

    mycircle.area(r1);
    mycircle.circ(r1);
    return 0;
}