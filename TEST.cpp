#include<sstream>
#include<iostream>
using namespace std;
string fun(int a,int b);
int main()
{

    cout<<fun(2,4);
    cin.get();
    return 0;
}
string fun(int a,int b)
{
    stringstream ss;
    ss<<a<<"+"<<b<<"="<<a+b;
    return ss.str();
}