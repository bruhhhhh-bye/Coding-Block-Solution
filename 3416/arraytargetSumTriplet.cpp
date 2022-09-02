#include <bits/stdc++.h>
using namespace std;

int main(){
    int count;
    cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sort(arr, arr+count);
    for (int i = 0; i < count-2; i++)
    {
        for (int j = i+1; j < count-1; j++)
        {
            for (int k = j+1; k < count; k++)
            {
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
                }
            }
            
        }
        
    }
    
    
}