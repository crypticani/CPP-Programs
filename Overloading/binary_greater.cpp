// > (Greater than)Operator overloading
 
#include<iostream>
using namespace std;
class Binary
{
	private :
		int num;
	public :
		void input()
		{
			cin>>num;
		}
		int operator >=(Binary x)
		{
			if(num>=x.num)
			return 1;
			else
			return 0;
		}
};
int main()
{
	Binary n1,n2;
	cout<<"Please  enter 1st number.  ";
	n1.input();
	cout<<" Please  enter 2nd number.";
	n2.input();
	if(n1>=n2)
	{
		cout<<"First no is greater";
	}
	else
	{
		cout<<"Second no is greater";
	}
 return 0;
}