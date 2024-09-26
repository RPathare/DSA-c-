#include <iostream>
using namespace std;

int main()
{
    int a=5,b=7;
    cout<<"a="<<a<<" "<<"b="<<b;
    //a=a+b;
    //b=a-b;
    //a=a-b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<endl;
    cout<<a<<" ";
    cout<<b;

    return 0;
}