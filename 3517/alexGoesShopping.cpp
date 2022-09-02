#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        cin>> arr1[i];
    }
    int b;
    cin>>b;

    for (int i = 0; i < b; i++)
    {
        int c,d;
        cin>>c>>d;
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            if(c%arr1[i]==0){
                count++;
            }
        }
        if(count>=d){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    } 
    return 0;
}