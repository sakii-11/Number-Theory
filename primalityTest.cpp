#include <iostream>
using namespace std;



bool isprime(int n)
{
    if(n==1)
    return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}

int main() {
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        if(isprime(n))
        cout << "yes"<< endl;
        else
        cout << "no"<< endl;
        
    }
	return 0;
}