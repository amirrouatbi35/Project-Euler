#include<iostream>

using namespace std;

int main() {
    int i=1,j=1;
    int sum = 0;
    while(3*i<1000)
    {
        sum += 3*i;
        i+=1;
    }

    while(5*j<1000)
    {
        if((5*j)%3!=0)
            sum+=5*j;
        j+=1;
    }

    cout<<sum<<endl;
    return 0;
}
