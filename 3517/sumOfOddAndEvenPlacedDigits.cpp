#include <iostream>
using namespace std;

int main(){
    int num ;
    cin>>num;
    int count = 0;
    int digits;
    int evenSum = 0;
    int oddSum = 0;
    while (num>0){
        digits = num % 10;
        num = num/10;
        count++;
        if (count%2==0){
            evenSum += digits;              
        }
        else{
            oddSum += digits;              
        }              
    }
    cout<<oddSum<<endl;    
    cout<<evenSum<<endl;
   
}