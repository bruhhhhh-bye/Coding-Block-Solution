#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n/2; i++)
    {
        int temp = arr[i];
        arr[i] =arr[n-i];
        arr[n-i]= temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
}