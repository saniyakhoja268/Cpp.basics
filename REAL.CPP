#include<iostream.h>
#include<conio.h>
class complex
{
	public:
	double real,img;
	complex(double r=0,double i=0)
	{
		real=r;
		img=i;
	}
	friend complex operator+(const complex & c1.const complex & c2)
	{
		complex temp;
		temp.real=c1.real+c2.img;
		temp.img=c1.img+c2.real;

	}
	void display()
	{
		cout<<"Real:"<<real<<"image:"<<img;
	}
};
void main()
{
	clrscr();
	complex c1(3,4),c2(1,2);
	complex c3=c1+c2;
	c3.display();
	getch();
}