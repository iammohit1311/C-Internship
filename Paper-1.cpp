#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  
  sort(arr,arr+n);
  cout<<"The smallest element is "<<arr[0]<<" and Second smallest element is "<<arr[1];
  
  return 0;
}