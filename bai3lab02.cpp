#include <iostream>
#include <conio.h>

using namespace std;
void Input(int &a,char &b,int &c)
{
	cout<<"Enter first number, operator, second number: ";
	cin>>a;
	cout<<"please choose the operator: ";
	cin>>b;
	cin>>c;
}
void Operator(int a,char b,int c,double s)
{
	START:
	Input(a,b,c);
	char A;
	 s=0;
	switch(b)
	{
		case '+':s=a+c;break;
		case '-':s=a-c;break;
		case '*':s=a*c;break;
		case '/':s=(double)a/c;break;
		default:cout<<"only type + - * / ";break;
	}
	cout<<"Answer = "<<s<<endl;
	cout<<"Do another (y/n)?";
	cin>>A;
	if(A=='y')
	{
		goto START;
	}
	else if(A=='n')
		cout<<"THE END";
}
	

int main()
{
	
	int a,c;
	double s;
	char b;
	Operator(a,b,c,s);
	return 0;
	
}
