#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int target;
    cin>>target;
    int count=0;
    while (num!=0)
    {
        int digits;
        digits = num%10;
        num = num / 10;
        if (digits == target)
        {
            count++;
        }  
    }
    cout<<count;

}