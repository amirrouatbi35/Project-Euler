
#include <iostream>

using namespace std;

int main()
{

	long int sumSquares=0;
	long int sumSquared;

	for(int i=1;i<=100;i++){
		sumSquares += i*i;
	}
	sumSquared = (100*101/2);
	sumSquared *= sumSquared;
	cout<<sumSquared-sumSquares<<endl;




}