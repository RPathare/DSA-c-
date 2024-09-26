
#include <iostream>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    return num*fact(num-1);
}
int main()
{
    int num=3;
    cout<<fact(num);
    // for(int i=1;i<=num;i++){
    //     fact=fact*i;
    // }
    // cout<<fact;
    return 0;
}