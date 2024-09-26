#include <iostream>
using namespace std;

int main()
{
   int num=1234554321;
   int n=num;
   int rev=0;
   while(num!=0){
       int rem=num%10;
        rev=(rev*10)+rem;
       num/=10;
   }
   
   if(n==rev){
       cout<<"num is palindrome";
   }else{
       cout<<"num is not palindrome";
   }
    return 0;
}