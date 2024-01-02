#include<iostream>
using namespace std;

class cal
{
	public:
		int a,b;
		
		int add(int a,int b)
		{
			return a+b;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
		int div(int a,int b)
		{
			return a/b;
		}
		int mul(int a,int b)
		{
			return a*b;
		}
};

int main()

{
	cal c1;
	int x,y,z;
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"Enter the second number:";
	cin>>y;
	cout<<"Enter the case\n1=Addition\n2=Subtraction\n3=Division\n4=Multiplication\nEnter:";
	cin>>z;
	if(z<=4 && z>=1)
	{
	
	switch(z)
	{
		case 1:
			cout<<"\nAddition:"<<c1.add(x,y);
			break;
		case 2:
			cout<<"\nSubtraction:"<<c1.sub(x,y);
			break;
		case 3:
			cout<<"\nDivision:"<<c1.div(x,y);
			break;
		case 4:
			cout<<"\nMultiplicetion:"<<c1.mul(x,y);
			break;
	}
}
  else
  {
  	cout<<"Invalid input";
  }
}
