#include <bits/stdc++.h>
using namespace std;

void Union(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (a[i]<b[j]) cout<<a[i++]<<" ";
		else if (b[j]<a[i]) cout<<b[j++]<<" ";
		else {
			cout<<b[j++]<<" ";
			i++;
		}
	}

	while (i < m) cout<<a[i++]<<" ";
	while (j < n) cout<<b[j++]<<" ";
}

void Intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i<m && j<n) {
        if (a[i]<b[j]) i++;
        else if (b[j]<a[i]) j++;
        else
        {
            cout<<b[j]<<" ";
            i++;
            j++;
        }
    }
}

int main()
{
  int m,n; cin>>m>>n;
	int a[m], b[n];
  for(int i=0; i<m; i++) cin>>a[i];
  for(int i=0; i<n; i++) cin>>b[i];

	Union(a,b,m,n);
  cout<<endl;
  Intersection(a,b,m,n);

	return 0;
}
