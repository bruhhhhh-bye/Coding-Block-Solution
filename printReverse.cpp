#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int newNum;
    int count;
    while (num!=0)
    {
        int digits;
        digits = num%10;
        num = num / 10;
        count++;
        if (count==1)
        {
            newNum = digits; 
        }
        else{
            newNum = newNum*10 + digits;
        }        
    }
    cout<<newNum;

}