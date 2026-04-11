#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	void car()
	{
		cout<<"Car method is called";
	}
};
class ghi:public abc
{
	public:
	void bike()
	{
		cout<<"\nBike method is called";
	}
};
class d_class:public abc
{
	public:
	void dclass()
	{
		cout<<"\nDerived class is called";
	}
};
class mno:public ghi,public d_class
{
	public:
	void truck()
	{
		cout<<"\nTruck method is called";
	}
};
void main()
{
	clrscr();
	mno obj;
	obj.ghi::car();
	obj.bike();
	obj.dclass();
	obj.truck();
	getch();
}