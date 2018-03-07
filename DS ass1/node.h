#pragma once

	class node
	{
	private:
		float data;
		node* next;
	public:
		node() { data = 0; next = nullptr; }
		node(int d) : data(d), next(nullptr) {}
		int getData() { return data; }
		void setData(int d) { data = d; }
		node* getNext() { return next; }
		void setNext(node* n) { next = n; }
		friend class list;
	};


