#include<iostream.h>
#include<conio.h>
class count
{
	public:
	int value;
	count()
	{
		  value=5;
	}
	void operator++()
	{
		value++;
	}
	void display()
	{
		cout<<"Count:"<<value;
	}
};
void main()
{
	clrscr();
	count obj;
	++obj;
	obj.display();
	getch();
}