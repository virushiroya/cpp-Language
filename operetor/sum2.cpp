#include <iostream> 

using namespace std;

template <class t1 , class t2>

t1 sum(t1 a,t2 b)
{
    if (a > b)
    {
        return a;
    }

    else
    {
        return b;
    }
    
}

int main()
{
    cout << "you sum = " << sum(10,5) << endl;

} 