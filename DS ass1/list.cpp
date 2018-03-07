#include "list.h"
#include <iostream>
using namespace std;



list::list()
{
	chain = nullptr;
}


list::list(int d)
{
	chain = new node(d);
}

void list::addfront(float item)
{
	node* temp = new node(item);
	temp->setNext(chain);
	chain = temp;
}
void list::addend(float item)
{
	node* temp = chain;
	if (chain == nullptr) chain = new node(item);
	else
	{
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
			temp->next = new node(item);
	}
}

void list::addmiddle(int d,int index) 
{    
	if (chain == nullptr)
	{
		addfront(d);
		return;
	}
	
	if (index == this->getSize()) 
	{
		addend(d);
		return;
	}

	node* p1 = chain;
	node* p2=p1;
	
	
	int counter = 0;
	while (counter<index) // indx=2  i=0 p1=0 p2??				//i=1  p1=1  p2=0			//i=2	break p1=2  p2=1  
	{  
		p2 = p1;
		p1 = p1->next;
		counter++;
	}
	node* newnode = new node(d);
	p2->setNext(newnode);
	newnode->setNext(p1);
	

}

float list::avgValue() 
{
	if (chain == nullptr)
		return 0;
	float sum = 0;
	node* p = new node();
	p = chain;
	int i = 0;
	while (i!=this->getSize()) {
		sum += p->getData();
		p = p->getNext();
		i++;
	}
	float f = sum /(float) this->getSize();
	return f;

}

void list::reverse()
{
	if (chain == nullptr)
		return;
	int y = this->getSize();
	int* x = new int[y];
	node* temp = new node();
	temp = chain;
	int i = 0;
	for (i = 0; i < y ; i++)
	{
		x[i] = temp->getData();
		temp = temp->getNext();
	}
	
	
	for(i;i>0;i--)
	{
		cout << x[i-1] << endl;
	}
	temp = nullptr;
	delete [] x;
	delete temp;
}

int list::getSize()
{
	if (chain == nullptr)
		return 0;
	int i = 0;
node* p = new node();
p = chain;
while (p->getNext() != nullptr)    
{	
	i++;
	p = p->getNext();
}

return (i + 1); 
}

void list::print() {
	node*p = chain; 
	cout << "contents of this list " << endl;
	while (p->next != nullptr)
	{ cout << p->data << endl;
	p = p->next;
	}
	cout << p->data << endl;

}

int list::get(float index)
{
	node* p = new node();
	p = chain;
	for (int i = 0; i < index; i++)
	{
		p = p->getNext();
    }
	return p->getData();
}



