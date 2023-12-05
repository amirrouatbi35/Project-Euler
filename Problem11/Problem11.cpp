
#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

const int size = 20;

using namespace std;

int maxProd(const int (*tab)[size], int i, int j)
{
	int horiz=1,vert=1,diag1=1,diag2=1;
	int m=-1;

	if(tab[i][j]==0)
		return 0;

	if(i<=size-4)
	{
		for(int k=0;k<4;k++)
			vert *= tab[i+k][j];
		m = max(m,vert);
	}

	if(j<=size-4)
	{
		
		for(int k=0;k<4;k++)
			horiz *= tab[i][j+k];
		m = max(m,horiz);
	}

	if((i<=size-4)&&(j<=size-4))
	{
		for(int k=0;k<4;k++)
			diag1 *= tab[i+k][j+k];
		m = max(m,diag1);
	}

	if((i<=size-4)&&(j>=4))
	{
		for(int k=0;k<4;k++)
			diag2 *= tab[i+k][j-k];
		m = max(m,diag2);
	}

	return m;



}



int main()

{

	string s,str,line;
	ifstream inputFile("grid.txt");

	int tab[size][size];
	int i=0,j=0;

	if(inputFile.is_open())
	{
		while(getline(inputFile,line))
		{

				str+=line+" ";
		}

		inputFile.close();

		
		stringstream ss(str);
		int w=0;

		while (getline(ss, s, ' ')) {
 		
 			tab[i][j%size] = stoi(s);
 			j+=1;
 			i = j/size;
    }

    int m=-1;

    for(int i=0;i<size;i++)
    	for(int j=0;j<size;j++)
    		m = max(m,maxProd(tab,i,j));

    cout<<m<<endl;


		


	}
	else
		cerr<<"Error opening the file!"<<endl;





	return 0;
}