
#include <iostream>

using namespace std;



int main()
{

	int a;
	for(int c=1000;c>=1;c--)
		for(int b=c-1; b>=1; b--)
		{
			a = 1000-c-b;
			if ((a<b)&&(a>0)&&(a*a+b*b==c*c))
				cout<<a*b*c<<endl;
		}




	return 0;
}