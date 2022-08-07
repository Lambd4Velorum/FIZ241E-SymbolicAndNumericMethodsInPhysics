#include <iostream>
#include <valarray>
using namespace std;

  
	int main()
	
	{
		int dim;
		int a;
		int i;

	cin>>dim;
	
		valarray<double>v1(dim);
		valarray<double>v2(dim);
	
	a=v1.size();
	
   for( int i=0;i<a;i++)
	{v1[i]=i;
		v2[i]=i*2;}
		
		cout<<v1[i]<<" "<<endl;
		
		return 0;
		
	}
	
