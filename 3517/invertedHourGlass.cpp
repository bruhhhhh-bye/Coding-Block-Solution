#include <iostream>
using namespace std;

int main(){
    int count ;
    cin>>count;
    for (int i = count; i >= 0; i--)
    {
        for (int j = count; j >=i; j--)
        {
            cout<<j<<" ";
        }
        for (int m = 2*i - 1 ; m >0; m--)
        {
            cout<<" "<<" ";
        }
        for (int n = i; n <=count ; n++)
        {
            if (n!=0)
            {
                cout<<n<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = 1; i <= count; i++)
    {
        for (int j = count; j >= i; j--)
        {
            cout<<j<<" ";
        }
        for (int m = 1 ; m <= 2*i - 1 ; m++)
        {
            cout<<" "<<" ";
        }
        for (int n = i; n <=count ; n++)
        {
            cout<<n<<" ";

        }
        cout<<endl;  
    }
    
}