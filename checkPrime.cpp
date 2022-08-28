#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num1)
{
    if (num1 >= 2)
    {
        for (int i = 2; i <= sqrt(num1); i++)
        {

            if (num1 % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    return 0;
}

int main()
{
    int a;
    cin >> a;
    if (isPrime(a))
    {
        cout << "Prime";
    }
    else{
        cout<<"Not Prime";
    }
}