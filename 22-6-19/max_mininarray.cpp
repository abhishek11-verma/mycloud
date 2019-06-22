#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int min=INT_MAX,max=INT_MIN;
	for(i=0;i<n;i+=2)
	{
		if(a[i]>a[i+1])
		{
			if(max<a[i])
				max=a[i];
			if(min>a[i+1])
				min=a[i+1];
		}
		else
		{
			if(max<a[i+1])
				max=a[i+1];
			if(min>a[i])
				min=a[i];
		}
	}
	cout<<"max="<<max<<"min="<<min;
	return 0;
}
