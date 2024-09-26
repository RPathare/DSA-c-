#include <iostream>
using namespace std;

int main()
{
   string str="Shrutisha";
   int n=str.size();
   int i=0;
   int j=n-1;
   while(i<j){
       swap(str[i],str[j]);
       i++;
       j--;
   }
   cout<<str;
    return 0;
}