
#include <iostream>
#include "math.h"
#include <map>



using namespace std;


bool isPrime(int n)
{

	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main()
{

	std::map<int, int> primes;


	int tab[20];
	//initialize prime factorization
	for(int i=2;i<20;i++)
		if (isPrime(i))
			primes[i]=0;

	int aux;
	int count = 0;

	//compute maximum power for each prime number across divisors of each of the numbers from 2 to 20
	for(int i=2;i<=20;i++)
	{
		for (const auto& pair : primes) {
        if (i%pair.first==0)
        {
        	aux = i;
        	while(aux%pair.first==0)
        	{
        		aux/=pair.first;
        		count+=1;
        	}
        	primes[pair.first] = max(count,pair.second);
        	count = 0;
        }
    	}
	}

	//compute product of all maximum factors
	long int product = 1;
	for (const auto& pair : primes)
	{
		product *= pow(pair.first,pair.second);
	}
	cout<<product<<endl;

	





	return 0;
}