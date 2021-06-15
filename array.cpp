#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n ";
	cin>>n;
	int a[n];
	int h=n/2;
	int k=0;
	for(int i=1;i<=h;i++)
	{
		a[k++]=i;
		a[k++]=-i;
	}
	if(n%2==1)
	a[n-1]=0;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
