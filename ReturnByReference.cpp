#include <iostream>
using namespace std;

int &fun(int &x)
{
    return x;
}

int main()
{
    int a = 30;
    int c = fun(a);
    cout << c << endl;
    return 0;
}