
#include<iostream>
class Node{
	 public:
	int info;
	Node* next;
};

class List{
	private:
		Node* HEAD;
		Node* TAIL;
		public:
		List();
		~List();
	
	
		bool isEmpty();
		void addToHead(int data);
		void addToTail(int data);
		void add(int data, Node* predessor);
		int removeFromHead();
		void remove(int data);

		void traverse();
		bool search(int data);
		bool retrieve ( int data, Node* &outputptr);
		int itemHead();
};

