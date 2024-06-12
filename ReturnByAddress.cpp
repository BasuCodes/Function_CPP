#include <iostream>
using namespace std;

int *fun()
{
    int x = 20, y = 30, z, *q;
    z = x + y;
    q = &z;
    return q;
}
int main()
{
    int *sum = fun();
    cout << *sum << endl;
    return 0;
}