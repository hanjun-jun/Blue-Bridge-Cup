#include<iostream>
#include<cmath>
#define PI atan(1.0)*4
using namespace std;
int main()
{
	int r;
	cin>>r;
	double s;
	s = PI*r*r;
	printf("%.7f",s);
	return 0;
}