#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
          int cnt=0;
          while(n%i==0)
          {
            cnt++;
            n= n/i;
          }
          cout << i<< "^" << cnt;
        }
    }
    if(n>1) //if the number is a prime number 
    {
      cout << n << "^"<< 1 << endl;
    }
  }
}