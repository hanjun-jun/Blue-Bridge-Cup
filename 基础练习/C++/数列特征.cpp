#include<iostream>
using namespace std;
int main()
{
	int a[10000];
	int n,min,max;
	int sum=0;
	cin>>n;
	for(int j=0;j<n;j++)
		cin>>a[j];
	min=max=a[0];
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	cout<<max<<endl;
	cout<<min<<endl;
	cout<<sum<<endl;
	return 0;
}