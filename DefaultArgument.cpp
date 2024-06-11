#include <iostream>
using namespace std;

int add(int x,int y=0,int z=0)
{
    return x+y+z;    
}

int main()
{
    int a=90,b=23,c=34,d;
    d=add(a,c);
    cout<<"Sum "<<d<<endl;
    d=add(a,b,c);
    cout<<"Sum "<<d<<endl;
}