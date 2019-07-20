#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char a;
	int m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{	for(int j=0;j<m;j++)
		{
			a=65+abs(j-i);
			cout<<a;
		}
	cout<<endl;
	}
	return 0;
}