#include "polynomial.h"



polynomial::polynomial()
{
}

void polynomial::add(float x[],int order)
{
	for (int i = 0; i <= order; i++)
	{
		l.addfront(x[i]);
	}
}
float polynomial::evaluate(int d)
{
	float sum = 0;
	for (int i = 0; i < l.getSize(); i++) 
	{
		sum += l.get(i)*pow(d, i);
	}
	return sum;
}

polynomial polynomial::diff()
{
	polynomial p;
	float* f = new float[l.getSize()];
	int i;
	for ( i = 0; i < l.getSize(); i++)
	{
		
		f[i] = l.get(i)*i;
	}
	float* f2 = new float(l.getSize());
	int j = 0;
	i--;
	for (i; i> 0; i--)
	{
		f2[j] = f[i];
		j++;
	}
	p.add(f2, (l.getSize()-2));
	p.print();

	return p;
}
void polynomial::print()
{
	for (int i = 0; i < l.getSize(); i++) 
	{
		cout << l.get(i) << "x^" << i<<"  ";
	}
	cout << endl;
}

void polynomial::mul(polynomial p2)
{
int	m = l.getSize();
int	n = p2.getSize();
	int *prod = new int[m+n - 1];

	// Initialize the porduct polynomial
	for (int i = 0; i<m + n - 1; i++)
		prod[i] = 0;

	// Multiply two polynomials term by term

	// Take ever term of first polynomial
	for (int i = 0; i<m; i++)
	{
		// Multiply the current term of first polynomial
		// with every term of second polynomial.
		for (int j = 0; j<n; j++)
			prod[i + j] += l.get(i) * p2.get(j);
	}

	for (int i = 0; i<n+m-1; i++)
	{
		cout << prod[i];
		if (i != 0)
			cout << "x^" << i;
		if (i != n+m- 1)
			cout << " + ";
	}
	
//	return prod;
}