#include <iostream>
#include <valarray>
using namespace std;

int main() {
	int M[30][30];
	int i;
	int j;
	
	for (int i=0;i<30;i++)
	{for (int j=0;j<30;j++)
		{M[i][j]=i+j;
		}
	}

	cout<<"girilen matris:" << endl;
for(int i=0;i<30;i++)
{
	for(int j=0;j<30;j++)
{cout<<M[i][j]<<" ";
}
cout<< endl;}

	return 0;
}
