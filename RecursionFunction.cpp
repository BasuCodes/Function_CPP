#include <iostream>
using namespace std;

void fun(int x)
{
    if (x <= 10)
    {
        cout << 3 * x << endl;
        fun(x + 1);
    }
}
int main()
{
    int a = 1;
    fun(a);
    return 0;
}