#include <iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=34,b=54;
    cout<<"Before Swap"<<endl<<"a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After Swap"<<endl<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}