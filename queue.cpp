#include<iostream>
using namespace std;
class queue{
	public:
	int marks[15];
	int front;
	int rear;
	queue(){
		front=0;
		rear=0;
	}
	void enqueue(int mark){
		marks[rear]=mark;
		rear++;
	}
	void dequeue(){
		front++;
	}
	bool empty(){
		if(front==rear){
			return true;
			
		}
		else{
			return false;
		}
	}
	
	bool full(){
	if(rear==15){
		return true;
	}
	else{
		return false;
	}	
	}
	void display(){
		cout<<"Queue Elements"<<endl;
		for(int i=front; i<rear; i++){
			cout<<marks[i]<<endl;
		}
	}
	
	
};
int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.display();
	q.dequeue();
	q.dequeue();
	q.display();
}