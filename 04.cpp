#include <iostream>

using namespace std;
void Input(int &a,int &b,char &O,int &c,int &d)
{
	char dummy;
	cout<<"Input first fraction, Operator, second fraction: ";
	cin>>a;cin>>dummy;cin>>b;cin>>O;cin>>c;cin>>dummy;cin>>d;
}
void Operator(int a,int b,char O,double s,int c,int d)
{
	START:
	Input(a,b,O,c,d);
	 s=0;
	 char C;
	switch(O)
	{
		case '+':s=(double)(a*d+b*c)/(b*d);break;
		case '-':s=(double)(a*d-b*c)/(b*d);break;
		case '*':s=(double)(a*c)/(b*d);break;
		case '/':s=(double)(a*d)/(b*c);break;
		default:"only type + - * / ";break;
	}
	cout<<"Answer= "<<s<<endl;
	cout<<"Do another (y/n)?"<<endl;
	cin>>C;
	if(C=='y')
	{
		goto START;
	}
	else if(C=='n')
		cout<<"THE END";
}
	
int main()
{	
		char O;
		int a,b,c,d;
		float s;
		Operator(a,b,O,s,c,d);
		return 0;
}
