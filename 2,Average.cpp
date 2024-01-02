#include<iostream>
using namespace std;
class avg
{
	public:
		int a,b,c;
		int average(int a,int b,int c)
		{
			return (a+b+c)/3;
		}
};

int main()
{
	int x,y,z;
	avg a1;
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"Enter the second number:";
	cin>>y;
	cout<<"Enter the third number:";
	cin>>z;
	cout<<"Average="<<a1.average(x,y,z);
}
