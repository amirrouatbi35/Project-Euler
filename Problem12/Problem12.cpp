
#include <iostream>
#include "math.h"


using namespace std;

bool isPrime(int n)
{

	if(n<0)
		return false;
	else if (n==1)
		return false;
	else if (n==2)
		return true;
	else if (n==3)
		return true;
	else if (n%2==0)
		return false;
	else
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return false;
	return true;

}



int main()
{

	int countDivisors=1;

	int n=1;
	int s,aux,i,count,countPrim;


	while(1)
	{
		s = n*(n+1)/2;
		aux = s;
		count = 1;
		if (!isPrime(aux))
		{
			i=2;
			while(aux!=1)
			{
				countPrim = 1;
				if (isPrime(i))
					while(aux%i==0)
						{
							aux /= i;
							countPrim +=1;
						}
				count *= countPrim;
				i+=1;

			}
		}
		else
			count = 2;

		if (count>500)
		{
			cout<<s<<endl;
			break;
		}

		n+=1;
	}







	return 0;
}