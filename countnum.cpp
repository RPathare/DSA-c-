
#include <iostream>
using namespace std;

int main()
{
   int num=123456789;
   int n=num;
   int count=0;
   while(num!=0){
       int rem=num%10;
       count++;
       num/=10;
   }
   cout<<count;
   
    return 0;
}