// converted.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CAddition
{
private:
	int feet;
	double inches;
public:
	CAddition()
	{
		feet = 0;
		inches = 0;
	}
	void setfeet(int f1, int f2)
	{
		feet = f1 + f2;
		inches = feet * 12;
	}
	void setinches(double i1, double i2)
	{
		inches = i1 + i2 + inches;
	}
	void setadd()
	{
		feet = inches / 12;
		inches = inches - 12.0*(int)(inches / 12);
	}
	void display()
	{
		cout << "feet=" << feet << "inches=" << inches << endl;
	}
};
int main()
{
	CAddition ot;
	ot.setfeet(12, 13);
	ot.setinches(25, 36);
	ot.setadd();
	ot.display();
	return 0;
}
