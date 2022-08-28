#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
        arr1[i]=sum;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    
    
}
