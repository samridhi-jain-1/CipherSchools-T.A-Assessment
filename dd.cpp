#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of gadgets: ";
	cin>>n;
	int a[n];
	cout<<"enter gadget's price of each type ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	int p;
	cout<<" enter the customer price ";
	cin>>p;
	int k;
	cout<<"Robot says to choose"<<k<<"atleast items";
	cin>>k;
	int c=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]<=p)
		c++;
	}
	if(c>=k)
	{cout<<"right";
	}
	else
	{cout<<"wrong";
	}
	return 0;
}
