#include<iostream>
using namespace std;

int modulo_expo(int n, int pow, int mod)
{
  int res=1;
   while(pow)
  {
    if(pow%2==0)
    {
      pow/=2;
      n=(n*n)%mod ;
    }
    else
    {
      pow--;
      res= (res*n)%mod;
    }
  }
  return res;

}

int main()
{
  int n,pow;
  cin >> n >> pow;
  int base =n;
  int res=1;
  while(pow)
  {
    if(pow%2==0)
    {
      pow/=2;
      base*=base;
    }
    else
    {
      pow--;
      res*=base;
    }
  }
  cout << res ;
}
