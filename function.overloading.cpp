Q. WAP to implement the concept of function overloading

#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int n1,n2;
	float f1,f2;
	abc()
	{
		cout<<"This is function Overloading";
	}
	void add()
	{
		cout<<"\nResult:"<<(10+10);
	}
	void add(int n1)
	{
		cout<<"\nResult:"<<(n1+n1);
	}
	void add(int n1,int n2)
	{
		cout<<"\nResult:"<<(n1+n2);
	}
	void add(int n1,float f2)
	{
		cout<<"\nResult:"<<(n1+f2);
	}
	void add(float f1,float f2)
	{
		cout<<"\nResult:"<<(f1+f2);
	}
};
void main()
{
	clrscr();
	int n1,n2;
	float f1,f2;
	abc obj;
	obj.add();
	obj.add(n1);
	obj.add(n1,n2);
	obj.add(n1,f2);
	obj.add(f1,f2);
	getch();
}