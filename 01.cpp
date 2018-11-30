#include <iostream>

using namespace std;

class Cphone
{
	private:
		int areacode;
		int exchange;
		int number;
		string mynumber;
	public:
		void nhap();
		void xuat();
};
void Cphone::nhap()
{
	mynumber="(212) 767-8900";
	cout<<"Enter your area code, exchange and number: ";
	cin>>areacode;cin>>exchange;cin>>number;
}
void Cphone::xuat()
{
	cout<<"My number is: "<<mynumber<<endl;
	cout<<"Your number is: "<<"("<<areacode<<")"<<" "<<exchange<<" "<<number<<endl;
}
int main()
{
	Cphone h;
	h.nhap();
	h.xuat();
	return 0;
}
