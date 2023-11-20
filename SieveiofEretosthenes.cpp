/*ifthere are millions of queueries and N<=1000000 than this will
give TLE from primilatiy test so We use Seive Of Erethosthenses
*/
//TDKPRIME - Finding the Kth Prime SPOJ
//find the nth prime no 
#include<iostream>
#include<vector>
using namespace std;
vector<long long int> isprime;
bool arr[90000001];

void sieve()
{
  int maxi=90000001;
  arr[0]= arr[1]= true;
  for(int i=2; i*i<=maxi; i++)
  {
     if(!(arr[i]))
     {
       for(int j=i*i; j<=maxi; j+=i)
       {
        arr[j]= true;
       }
     }
  }
  
  isprime.push_back(2); // since there is only one prime even number
  for(int i=3; i<maxi; i+=2)
  {
    if(!(arr[i]))
    {
      isprime.push_back(i);
    }
  }

}

int main()
{
  int t,n;
  cin >> t;
  sieve();
  while(t--)
  {
    cin >> n;
    cout << isprime[n-1] << endl;
  }
}