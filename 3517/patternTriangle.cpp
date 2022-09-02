#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            cout << " " <<" ";
        }
        for (int n = i; n <= 2 * i - 1; n++)
        {
            cout << n<<" ";
        }        
        for (int j = 1; j < i; j++)
        {
            cout<<2*i-j-1<<" ";
        }

        cout << endl;
    }
}
