#include <iostream>

using namespace std;


int main()
{

	long int u0 = 1;
	long int u1 = 2;
	long int a = 4000000;
	long long int sum=2;

	while(u1<=a)
	{
		u1 = u0 + u1;
		u0 = u1 - u0;
		if(u1%2==0)
			sum+=u1;

	}
	cout<<sum<<endl;



}