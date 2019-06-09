#include<iostream>
using namespace std;
int main()
{
	long f1=1,f2=1,f3=1,n;
	cin>>n;
	if(n>2)
	{
		for(int i=3;i<=n;i++)
		{
			f3=(f2+f1)%10007;
			f1=f2;
			f2=f3;
		}
	}
	cout<<f3;
return 0;
}