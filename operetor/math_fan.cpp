#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double b=1.849292;
    double result , result1 , result2;

    result = ceil(b);
    result1 = floor(b);
    result2 = round(b);

    cout<<result<<endl;
    cout<<result1<<endl;
    cout<<result2;

    return 0;
}