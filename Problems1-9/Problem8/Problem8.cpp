
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>


using namespace std;

int main()
{

	ifstream inputFile("number.txt");
	string s, line;

	if (inputFile.is_open()) {

		while (getline(inputFile, line)) {
            s += line;
        }

        inputFile.close();

		s.erase(remove_if(s.begin(), s.end(), [](char c) { return c == '\n'; }), s.end());

        long long int m=0;
        string ch;
        int currNumber;
        long long int product=1;

        int i=0;
        int jump=0;
        //for(int i=0;i<s.length()-12;i++)

        while(i<s.length()-12)
        {
        	ch = s.substr(i,13);

        	for(int j=0;j<13;j++)
        	{
        		currNumber = static_cast<int>(ch[j] - '0');
        		if (currNumber!=0)
        			product *= currNumber;
        		else
        		{
        			product = 0;
        			i += j+1;
        			jump=1;
        			break;
        		}

        	}
        	m = max(product,m);
        	product = 1;

        	if(!jump)
        		i+=1;
        	jump=0;
        }

        cout<<m<<endl;



	}
	else
		cerr << "Error opening the file." << std::endl;




	return 0;
}