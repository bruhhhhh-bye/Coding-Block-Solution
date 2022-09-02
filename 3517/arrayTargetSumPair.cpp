#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i; j < n; j++){
    //         if (arr[i]+arr[j]==target){

    //         cout<< min(arr[i],arr[j])<< " and " << max(arr[i],arr[j])<<endl;
    //         }
    //     }  
    // }    
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++){
            if (arr[i]+arr[j]==target){

            cout<< arr[i]<< " and " << arr[j]<<endl;
            }
        }  
    }   

}