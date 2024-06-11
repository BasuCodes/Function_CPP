#include <iostream>
using namespace std;

template <class T>
T maxim(T x,T y)
{
    return x>y?x:y;
}

int main()
{
    int a=12,b=45,c;
    c=maxim(a,b);
    cout<<"Maximum is "<<c<<endl;
    float d=5.6,e=8.7,f;
    f=maxim(d,e);
    cout<<"Maximum is "<<f<<endl;
    return 0;
}
