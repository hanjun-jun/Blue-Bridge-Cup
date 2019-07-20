#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(int j=0;j<n;j++)
		if(m==a[j])
		{
			cout<<j+1;
			return 0;
		}
	cout<<"-1";
	return 0;
}