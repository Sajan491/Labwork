
#include<iostream>
#include "singly_linked_list.h"
using namespace std;


List::List(){
	HEAD = NULL;
	TAIL = NULL;
	
}

List::~List(){}

bool List::isEmpty(){
	if (HEAD==NULL && TAIL == NULL){
		return true;
	}
	else
	{
		return false;
		}
}

void List::addToHead(int data){
	Node* newNode= new Node();
	newNode ->info = data;
	newNode ->next = HEAD;
	HEAD = newNode;
	if(TAIL==NULL)
		TAIL= HEAD;
	
	
}  

void List::addToTail(int data){
	Node* newnode = new Node();
	newnode->info = data;
	newnode->next = NULL;
	TAIL->next = newnode;
	TAIL = newnode;
	
}
void List::add(int data, Node* predecessor){
	Node* newNode = new Node();
	newNode->info = data;
	newNode->next = predecessor->next;
	predecessor->next = newNode;
}

int List::removeFromHead(){
	Node* nodeToDelete;
	nodeToDelete =HEAD;
	int num = HEAD->info;
	HEAD = nodeToDelete->next;
	return num;
}


void List::traverse(){
	Node* temp = HEAD;
	
	while(temp!=NULL){
		cout<< temp->info<<"\t";
		temp = temp-> next;
		
		
	}
	
}


bool List::search(int data){
		if (HEAD==NULL && TAIL == NULL)
			return false;
		Node* temp;
		temp= HEAD;
		while (temp!=NULL){
			if (temp->info == data){
				cout<<data<<"FOUND"<<endl;
				return true;
			}
			else{
				temp= temp->next;
				
			}
			
		}
		return false;
	
}



int List::itemHead(){
	int num = HEAD->info;
	return num;
}

void List::remove(int data){
		if (HEAD==NULL && TAIL == NULL)
			return;
		if(HEAD ->info == data){
		
			List::removeFromHead();
			HEAD= NULL;
			TAIL = NULL;
	}
	else{
		Node* temp;
		temp = HEAD ->next;
		Node* prev;
		prev = HEAD;
		
		while(temp!= NULL){
			if(temp->info == data){
				prev->next = temp ->next;
				delete temp;
				break;
			}
				
			if(prev ->next== NULL){
				TAIL = prev;
			}
			else{
				prev = prev -> next;
				temp = temp -> next;
			}
		}
		
	}
			
}



bool List::retrieve(int data, Node * &outputptr) {
		Node* p = new Node();
	p = HEAD;
	while (p != NULL && p->info != data) {
		p = p->next;
	}
	if (p == NULL)	return false;
	else {
		outputptr = p;
		return true;
	}
}

int main(){
	Node* prev = new Node();
	

	List li;
	
	if(li.isEmpty())
		cout<<"list Empty"<<endl;
	else
		cout<<"list not empty"<<endl;
	
	li.addToHead(1);
	li.addToHead(2);
	li.addToHead(3);
	li.addToHead(4);
	li.addToHead(5);

	li.traverse();

	li.remove(4);
	li.removeFromHead();
	li.traverse();

 	li.search(3);
 	li.addToTail(7);
	
	li.retrieve(3, prev);
    	li.add(10, prev);
	
 	
	
	li.traverse();
	
}



