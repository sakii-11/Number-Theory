#include <iostream>
#include <vector>
using namespace std;

bool arr[1000001];
int pp[1000001];

void seive()
{
  int maxi = 1000000;
    arr[0]= arr[1]= false;
  for(int i=2; i<=maxi; i++)
    arr[i]=true;

  for(long long int i=2; i*i<=maxi; i++)
  {
      if(arr[i]==1)
      {
        for(long long int j=i*i; j<=maxi; j+=i)
        {
          arr[j]= 0;
        }
      }
  }
  int count=0;
  int pp_count=0;
  for(long long int i=0; i<=maxi; i++)
  {
      if(arr[i]==1)
      {
        count++;
      }
      /*if(arr[count]==1)
      {
        pp[i]=1;
      }
      else
      pp[i]=0;*/
      if(arr[count]==1){
        pp_count++;
      }
      pp[i]= pp_count;

  }

}

int main()
{
  int t,l,r;
  cin>> t;
  seive();
  while(t--)
  {
     cin >> l >> r;
     int ans= pp[r]- pp[l-1];
    cout << ans << endl;
    
  }
  
}