#include <iostream>
#include <valarray>
using namespace std;

int main() {
	int M[250][1];
	int i;
	int j;
	
		int N[250][1];
	int k;
	int t;
	
	for (int k=0;k<250;k++)
	{	for (int t=0;t<1;t++)
		{
			N[k][t]=k*2;
		}
	}

	
for (int k=0;k<250;k++)
{
	for (int t=0;t<1;t++)
{cout<<N[k][t]<<" "<<endl;
}
cout<< endl;}

	return 0;
}
