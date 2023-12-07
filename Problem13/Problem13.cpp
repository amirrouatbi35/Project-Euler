
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>
#include "math.h"

using namespace std;


int main()
{

	ifstream inputFile("file.txt");
	string line,s="";
	int count=0,result=0;
	int digit;


	if(inputFile.is_open())
	{
		for (int i=1;i<=50;i++)
		{
			while(getline(inputFile,line))
					count += line[50-i]-'0';
			
			count += result%10;
			digit = count%10;
			result = result/10;
			result += count/10;

			s+=to_string(digit);

			count = 0;

			inputFile.clear();
			inputFile.seekg(0);

		}
		reverse(s.begin(), s.end()); 
		cout<<result<<endl;
		cout<<s.substr(0,8)<<endl;
		cout<<to_string(result)+s.substr(0,8)<<endl;


	}
	else
		cerr<<"Error opening the file!"<<endl;








	return 0;
}