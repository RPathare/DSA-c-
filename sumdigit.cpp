#include <iostream>
using namespace std;

int main()
{
   int num=12345;
   int sum=0;
   while(num!=0){
       int rem=num%10;
       sum+=rem;
       num/=10;
   }
   cout<<sum;
   
    return 0;
}