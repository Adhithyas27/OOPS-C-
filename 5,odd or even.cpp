#include<iostream>
using namespace std;
class Number
{
	public:
		int a;
		int num(int a)
		{
			if(a%2==0)
			{
				cout<<"It is even number";
			}
			else
			{
				cout<<"It is odd number";
			}
		}
};
int main()
{
	int x;
	Number n1;
	cout<<"Enter the number:";
	cin>>x;
	n1.num(x);
	
}

