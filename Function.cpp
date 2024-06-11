#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}

int main()
{    
    int a=90,b=40,c;
    c=add(a,b);
    cout<<"Sum "<<c<<endl;
    return 0;
}