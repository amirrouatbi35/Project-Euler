
#include <iostream>
#include "math.h"

using namespace std;

bool isPrime(int n)
{
	for(int i=3;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;


}


int main()
{

	int rank = 6;

	int number = 15;

	while(rank<10001)
	{
		if (isPrime(number))
			rank+=1;
		number+=2;
	}

	cout<<number-2<<endl;





	return 0;
}