#include <iostream>
using namespace std;


int arrayLinearSearch(int arr[], int n , int target){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }     
    }
    return -1;

} 



int main(){
    int n; 
    cin>>n;
    int target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    cin>> target;

    cout<< arrayLinearSearch( arr, n , target);
    
    
}