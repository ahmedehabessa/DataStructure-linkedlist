#include <stdio.h>
#include <iostream>
#include <string>
#include "list.h"
#include "polynomial.h"
using namespace std;
void main()


{
	polynomial p1, p2;
	int order1 = 2;
	int order;
	cout << "enter order " << endl;
	cin >> order;
	cout << "coefficents:" << endl;

	float* x = new float[order];

	for (int i = 0; i<order+1; i++)
		cin >> x[i];
	p1.add(x, order);
	float ss=	p1.evaluate(5);
	cout << "of first polynomial value a x=5  "<< ss<< endl;
	
	cout << "diff of first polynomial" << endl;
	p1.diff();

	cout << "enter order of 2nd polynomial" << endl;
	
	cin >> order;
	float* x2 = new float[order];
	cout << "coeficients" << endl;


	for(int i=0;i<order+1;i++)
	cin>> x2[i];

	//p1.add(x,order1);
	cout << "multiptication result" << endl;
	p2.add(x2, order);
	p1.mul(p2);

}



	/*
	list l1;
	//first test case
	cout << "is empty  " << l1.isEmpty() << endl;
	l1.addend(5);
	l1.addend(6);
	l1.addfront(4);
	l1.addmiddle(20, 1);
	l1.print();
	cout << "is empty  " << l1.isEmpty() << endl;
	cout << endl << "size of this list  " << l1.getSize() << endl;
	cout << "avg of this list  " << l1.avgValue() << endl;
	cout << "list reverse  " << endl;
	l1.reverse();
	cout << endl << "**************" << "second test case" << endl;

	list l2;
	//second testcase
	cout << "is empty  " << l2.isEmpty() << endl;
	cout << endl << "size of this list  " << l2.getSize() << endl;
	cout << "avg of this list  " << l2.avgValue() << endl;
	for (int i = 0; i < 15; i++) {
		l2.addfront(14 - i);
	}
	l2.addmiddle(10000, 5);
	l2.print();

	cout << "is empty  " << l2.isEmpty() << endl;
	cout << endl << "size of this list  " << l2.getSize() << endl;
	cout << "avg of this list  " << l2.avgValue() << endl;
	cout << "list reverse  " << endl;
	l2.reverse();
	cout << endl << "**************"; 

}*/