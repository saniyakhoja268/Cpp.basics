
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int n1,n2;
	int f1,f2;
	abc()
	{
		cout<<"\nResult="<<(10+10);
	}
	abc(int n1)
	{
		cout<<"\nResult="<<(n1+n1);
	}
	abc(int n1,int n2)
	{
		cout<<"\nResult="<<(n1+n2);
	}
	abc(int n1,float f2)
	{
		cout<<"\nResult="<<(n1+f2);
	}
	abc(float f1,float f2)
	{
		cout<<"\nResult="<<(f1+f2);
	}
};
void main()
{
	clrscr();
	int n1,n2;
	float f1,f2;
	abc obj;
	abc obj1(n1);
	abc obj2(n1,n2);
	abc obj3(n1,f2);
	abc obj4(f1,f2);
	getch();
}