#include <bits/stdc++.h>
using namespace std;

bool comp(int x, int y) {return abs(x) < abs(y);}

void minimizer(int arr[], int n)
{
	sort(arr, arr + n, comp);
	int mini = INT_MAX, x, y;
	for (int i = 1; i < n; i++) {
		if (abs(arr[i - 1] + arr[i]) <= mini) {
			mini = abs(arr[i-1] + arr[i]);
			x = i-1;
			y = i;
		}
	}
	cout<<arr[x]<<" "<<arr[y];
}

int main()
{
  int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	minimizer(arr, n);
	return 0;
}
