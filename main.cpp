/*Function overloading is same function name but different parameter are used
 * The function is only overloading using parameter
 * if the parameter same but different return type it gives error*/

#include <iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
float add(float x,float y)
{
    return x+y;
}
int add(int x,int y,int z){
    return z=x+y;
}
int main()
{
    int a=90,b=34,c,w;
    float d=4.5,e=7.8,f;
    f=add(d,e);
    c=add(a,b);
    w=add(a,b,c);
    cout<<"Sum is "<<c<<endl;
    cout<<"Sum is "<<f<<endl;
    cout<<"Sum is "<<w<<endl;
    return 0;
}
