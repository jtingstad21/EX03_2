﻿// ex2.cpp : Defines the entry point for the console application.
//
https://github.com/jtingstad21/jtingstad21_HW03.git

//PT -- 15/20

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation
{
	
public:
	//PT -- make these private
	int a, b, c;
	//PT -- since these are calculated from a, b, c, you don't need them as member variables
	double disc;
	double r1, r2;

	QuadraticEquation()
	{
		a = 1;
		b = 2;
		c = 3;
		disc = 0;
	}
	
	//PT -- need a constructor that takes three arguments
	// -3
	/*
	QuadraticEquation(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	*/
	
	//PT -- get functions should just return the member variable (not ask the user for a new one).
	// -2
	int getA()
	{
		cout << "Enter value for a: " << endl;
		cin >> a;
		return a;
	}
	int getB()
	{
		cout << "Enter value for b: " << endl;
		cin >> b;
		return b;
	}
	int getC()
	{
		cout << "Enter value for c: " << endl;
		cin >> c;
		return c;
	}
	double getDiscriminant()
	{
		disc = (b*b) - (4 * a*c);
		return disc;
	}
	
	double getRoot1()
	{
		//PT -- Since you set disc in getDiscriminant, calling it would work more effectively:
		//r1 = (-b + sqrt(getDiscriminant())) / (2 * a);
		r1 = (-b + sqrt(disc)) / (2 * a);
		if (disc < 0)
			r1 = 0;

		return r1;
	}

	double getRoot2()
	{
		//PT -- Since you set disc in getDiscriminant, calling it would work more effectively:
		//r2 = (-b - sqrt(getDiscriminant())) / (2 * a);
		r2 = (-b - sqrt(disc)) / (2 * a);
		if (disc < 1)
			r2 = 0;

		return r2;
	}

	void display()
	{
		cout << "discriminant = " << disc << endl;
		if (r1 != r2)
		{
			cout << "root 1 = " << r1 << endl;
			cout << "root 2 = " << r2 << endl;
		}
		//PT -- else if (disc == 0)
		else if (disc = 0)
			cout << "root 1 = root 2 = " << r1 << endl;
		else
			cout << "equation has no real roots." << endl;
	}
};


int main()
{
	QuadraticEquation eq1;
	eq1.getA();
	eq1.getB();
	eq1.getC();
	eq1.getDiscriminant();
	eq1.getRoot1();
	eq1.getRoot2();
	eq1.display();

    return 0;
}

