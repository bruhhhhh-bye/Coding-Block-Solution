#include <iostream>
using namespace std;

int main() {
    int count;
    cin>>count;
    
    for (int i = count; i >=0; i--)
    {
        for (int l = i; l < count; l++)
        {
            cout<<" "<<" ";
            
        }
        
        for (int j = i; j >=0 ; j--)
        {
            cout<<j<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        cout <<endl;
    } 
    for (int i = 1; i <=count; i++)
    {
        for (int l = i; l < count; l++)
        {
            cout<<" "<<" ";
            
        }
        
        for (int j = i; j >=0 ; j--)
        {
            cout<<j<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        cout <<endl;
    } 
}