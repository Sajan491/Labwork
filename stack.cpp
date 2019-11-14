#include<iostream>
#include "stack.h"

using namespace std;

Stack::Stack(){
	top=-1;
}

Stack::~Stack(){};

void Stack::push(int element){
	if(top>=MAX_STACK_SIZE-1){
		cout<<"Cannot Push"<<element<<".Stack is full"<<endl;
	}
	else{
		top++;
		this->elements[top]=element;

	}
}

int Stack::pop(){
	if(top<0){
		cout<<"Cannot pop"<<".stack is empty"<<endl;
	}
	else{


		 return this->elements[top--];
	}
}

int Stack::peak(){
	if(top<0){
		cout<<"the stack is empty"<<endl;
	}
	else{
		return this->elements[top];
	}
}

bool Stack::isEmpty(){
	if(top<0){
		return 1;
	}
	else{
		return 0;
	}
}


int main(){
	int p1,p2,p3,p4,p5,p6;
	Stack s;
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);

	p1=s.pop();
	p2=s.pop();
	p3=s.pop();

	p4=s.peak();

	p5=s.pop();

	p6=s.isEmpty();
	if(p6==1){
        cout<<"empty"<<endl;
	}
	else{
        cout<<"not empty"<<endl;
	}


	cout<<p1<<p2<<p3<<p4<<endl;

	return 0;



}
