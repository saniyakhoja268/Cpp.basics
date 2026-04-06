#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int num1,num2;
	float result;
	void setData(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	void calculate()
	{
		result=num1+num2;
	}
	void displayData()
	{
		cout<<"Result:"<<result;
	}
};
void main()
{
	clrscr();
	int n1,n2;
	abc obj;
	obj.setData(8,8);
	obj.calculate();
	obj.displayData();
	getch();
}

