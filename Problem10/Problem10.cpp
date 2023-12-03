
#include <iostream>
#include "math.h"

using namespace std;


bool isPrime(int n)
{

	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;

}

int main()
{

	long long int sum = 5; //2+3

	int c = 5;

	while(c<2*pow(10,6))
	{
		if (isPrime(c))
			sum+=c;
		c+=2;
	}

	cout<<sum<<endl;



	return 0;
}