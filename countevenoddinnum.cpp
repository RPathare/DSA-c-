
#include <iostream>
using namespace std;

int main()
{
   int num=28357;
   int n=num;
   int countEven=0;
   int countOdd=0;
   while(num!=0){
       int rem=num%10;
       if(rem%2==0){
           countEven++;
       }else{
           countOdd++;
       }
       num/=10;
   }
   cout<<countEven<<" "<<countOdd;
   
    return 0;
}