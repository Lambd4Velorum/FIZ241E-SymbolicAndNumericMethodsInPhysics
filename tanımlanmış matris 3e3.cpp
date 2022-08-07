#include <iostream>
#include <valarray>
using namespace std;

int main() {
	int M[3][3];
	M[0][0]=1;
	M[0][1]=2;
	M[0][3]=3;
	M[1][0]=10;
	M[1][1]=11;
	M[1][2]=12;
	M[2][0]=20;
	M[2][1]=21;
	M[2][2]=22;

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
{cout<<M[i][j]<<" ";
}
cout<< endl;}

	return 0;
}
