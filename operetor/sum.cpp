#include <iostream>

using namespace std;

// template <class N>
// void SetName(N Name)
// {
//     cout << "Display Templay :"
//          << Name << endl;
// }

// template <class x,class y>
// void SetName(x a,y b)
// {
//     cout << "Display Templay :"
//         << a <<
//         << b endl;
// }

template <class t>
t sum(t a,t b)
{
    return a+ b;
}

template <class t1 ,class t2>
t1 Sum(t1 a,t2 b)
{
    return a+ b;
}


int main()
{
    cout << "YOur Sum =  " << sum(5,5) << endl;
    cout << "YOur Sum =  " << sum(10.5,22.10) << endl;
}