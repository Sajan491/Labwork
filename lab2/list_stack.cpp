
#include<iostream>
#include "list_stack.h"
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

	
	
	
//IMPLEMETING STACK 

	cout<<" \nSTACK Implementation:"<<endl;
	Stack st;
	st.isEmpty();
	
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	cout<<st.top()<<endl;
	cout<<st.top()<<endl;
	cout<<st.pop()<<endl;
	cout<<st.pop()<<endl;
	cout<<st.top()<<endl;

	st.isEmpty();
	
	
}


