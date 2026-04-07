#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int n1,n2;
	float result;
	void add()
	{
		result=n1+n2;
	}
	void subtract()
	{
		result=n1-n2;
	}
	void multiply()
	{
		result=n1*n2;
	}
	void divide()
	{
		result=n1/n2;
	}
	void modulus()
	{
		result=n1%n2;
	}
	void display()
	{
		cout<<"Result="<<result;
	}
};
void main()
{
	clrscr();
	int num1,num2,op;
	abc obj;
	cout<<"Enter 2 numbers:";
	cin>>num1>>num2;
	obj.n1=num1;
	obj.n2=num2;
	cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\nSELECT:";
	cin>>op;
	switch(op)
	{
		case 1: obj.add();
			obj.display();
			break;
		case 2: obj.subtract();
			obj.display();
			break;
		case 3: obj.multiply();
			obj.display();
			break;
		case 4: obj.divide();
			obj.display();
			break;
		case 5: obj.modulus();
			obj.display();
			break;
		default: cout<<"INVALID";
	}
	getch();
}

