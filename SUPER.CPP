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
		abc::car();
		cout<<"\nBike method is called";
	}
};
void main()
{
	clrscr();
	ghi obj;
	obj.bike();
	getch();
}