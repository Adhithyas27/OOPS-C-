#include<iostream>
using namespace std;
class mull
{
	public:
	int m,i;
	int mul(int m)
	{
		for(i=1;i<=10;i++)
		{
			cout<<m<<"X"<<i<<"="<<m*i<<endl;
		}
	}
};
int main()
{
	mull m1;
	int a;
	cout<<"Enter the required table:";
	cin>>a;
	m1.mul(a);
	
}
