#pragma once
#include "list.h"
#include<string>
#
using namespace std;
class polynomial 
{
private:
	list l;
public:
	polynomial();
	
	void add(float x[],int order);
	float evaluate(int d);
	polynomial diff();
   void	mul(polynomial p2);
	void print();
	int getSize() { return l.getSize(); };
	float get(int i) { return l.get(i); };
};

