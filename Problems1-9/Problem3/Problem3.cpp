
#include <iostream>
#include "math.h"
using namespace std;

bool prime(int x)
{
	for(int i=2;i<sqrt(x);i++)
	{
		if(x%i==0)
			return false;
	}
	return true;


}

int main()
{


		long int x = 600851475143;
		long int r = sqrt(x);
		for(int j=r;j>1;j--)
			if((x%j==0)&&prime(j))
			{
				cout<<j<<endl;
				break;
			}

		return 0;

}