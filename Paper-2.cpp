#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  
  int curr_ldr = arr[n-1];
  cout<<curr_ldr;
  for(int i=n-2; i>=0; i--)
  {
    if(curr_ldr<arr[i])
    {
      curr_ldr=arr[i];
      cout<<curr_ldr;
    }
  }
  return 0;
}