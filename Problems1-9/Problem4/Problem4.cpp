
#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

int isPalindrome(int n)
{

	string str = to_string(n);
	string aux = str;
	reverse(str.begin(), str.end());
	return str==aux;



}

int main()
{
	long int m=-1;
	for(int i=999;i>99;i--)
		for(int j=i;j>99;j--)
			if (isPalindrome(i*j))
			{
				if(i*j>m)
					m=i*j;
				break;
			}
	cout<<m<<endl;


	return 0;
}