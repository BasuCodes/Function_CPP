#include <iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}

int main()
{
    int a=23,b=45,c;
    c=add(a,b);
    cout<<"a="<<a<<" b="<<b<<" Sum="<<c<<endl;
    return 0;
}
