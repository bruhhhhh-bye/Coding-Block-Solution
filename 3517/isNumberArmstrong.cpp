#include <bits/stdc++.h>
using namespace std;

bool armstrong(int num){
    int count = 0;
    int digits;
    int sum = 0;
    int temp = num;
    int temp1 = num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    while (temp > 0){
        digits = temp % 10;
        temp = temp / 10;
        sum += pow(digits,count); 
    }
    if (sum == temp1)
    {
        return true;
    }
    return false;
}

int main(){
    int num;
    cin >> num;
    if(armstrong(num)){
        cout<< "true";
    }
    else{
        cout<<"false";
    }
    return 0;
}




//second method with less number of  variables

int count(int x)
{
	int n = 0;
	while (x) {
		n++;
		x = x / 10;
	}
	return n;
}

// Function to check whether the given number is
// Armstrong number or not
bool isArmstrong(int x){
	// Calling order function
	int n = count(x);
	int temp = x, sum = 0;
	while (temp) {
		int r = temp % 10;
		sum += pow(r, n);
		temp = temp / 10;
	}

	// If satisfies Armstrong condition
	return (sum == x);
}


int main()
{
	int x ;
    cin>>x;
	cout << boolalpha << isArmstrong(x) << endl;
	
	return 0;
}
