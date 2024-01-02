#include<iostream>
using namespace std;
class compare
{
	public:
	int a,b;
	
	int com(int a,int b)
	{
		if(a==b)
		{
			cout<<"Numbers are equal";
		}
		else
		{
		cout<<"Numbers are not equal";
		}
	}
};
int main()
{
	compare c1;
	int x,y;
	cout<<"Enter the First number:";
	cin>>x;
	cout<<"Enter the second number:";
	cin>>y;
	c1.com(x,y);
}
