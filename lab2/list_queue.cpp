
#include<iostream>
#include "list_queue.h"
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





int List::itemHead(){
	int num = HEAD->info;
	return num;
}





int main(){

	
	

	
//IMPLEMENTING QUEUE

	cout<<"\nQueue Implementation:"<<endl;
	Queue qu;
	qu.isEmpty();
	qu.enqueue(1);
	qu.enqueue(2);
	qu.enqueue(3);
	qu.enqueue(4);
	qu.enqueue(5);

	qu.dequeue();
	qu.dequeue();
	
	qu.isEmpty();
	qu.showitems();
	
	return 0;
	
	
}


