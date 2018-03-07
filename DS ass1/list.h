 #pragma once
#include "node.h"
#include<iostream>
class list
{
	node* chain;
public:
	list();
	list(int d);
	void addfront(float d);
	void addmiddle(int d, int index);
	void addend(float d);
	int get(float index);
	bool isEmpty() { return chain==nullptr; };
	int getSize();
	void reverse();
	float avgValue();
	void print();

};