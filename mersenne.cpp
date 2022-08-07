//============================================================================
// Name        : mersenne.cpp
// Author      : suheyk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double mersenne(int x)
{
	return(pow(2.0,double(x))-1.0);
}

void isitprime(int x, int &isprime, double &mers)
{
	int zeroremainder=0, remainder;
	for(int n=2;n<x;n++)
{
remainder=x%n;
if (remainder==0) {zeroremainder=zeroremainder+1;}
}
if(zeroremainder==0)
{
	isprime=1;
	mers=mersenne(x);
}
else
{
	isprime=0;
			mers=0;
}
}

int main()
{
	int number, primeresult;
	double mersenneresult;
	ofstream myfile;
	myfile.open("myprime.txt.");

	cout<<"enter a psitive integer";
			cin>>number;

			if(number<=1)
			{
				myfile<<"the number should be greater than once"<<endl;
			}
			else
			{
				isitprime(number,primeresult,mersenneresult);
				if(primeresult==0)
				{
					myfile<<"the number you have entered is not a prime"<<endl;
				}
				else
				{
					myfile<<number<<"is a prime number and the mersenne number associated with it is"<<mersenneresult;
				}
			}
			myfile.close();

			return 0;
}
