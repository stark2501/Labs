#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a,b;
	float c;
	cout<<"Enter initial amount: "<<endl;
	cin>>a;
	cout<<"Enter number of years: "<<endl;
	cin>>b;
	cout<<"Enter interest rate (percent per year): "<<endl;
	cin>>c;
	double sum=0;
	for(int i=1;i<=b;i++)
	{
		sum=a+(a*(c/100));
		a=sum;
	}
	cout<<sum;
	return 0;
}

		
