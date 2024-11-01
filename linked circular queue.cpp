#include<iostream>
using namespace std;
class queue{
	public:
	int marks;
    queue *next;
    
    queue(){
    	marks=0;
    	next=NULL;
	}
};
class linkedqueue{
	public:
   
	queue *front;
	queue *rear;
	
	
	linkedqueue(){
		front=NULL;
		rear=NULL;
	}
	void enqueue(int value){
		queue *q =new queue;
		q->marks=value;
		
		if(rear == NULL){
			front=rear=q;
			rear->next=front;
			return;
    		}
    		else{
    		rear->next=q;
    		rear=q;
    		rear->next=front;
			}
    }
	void dequeue(){
		if( front == NULL){
			cout<<"Queue empty."<<endl;
	    }
	    if(front == rear){
	    	delete front;
	    	front = rear = NULL;
		}
		else{
			queue *temp=front;
			front=front->next;
			rear->next=front;
			delete temp;
		}
	}
		void display(){
			queue *q1 =front;
			
			do{
				cout<<"Elements of queue: "<<q1->marks<<endl;
				q1=q1->next;
			}while(q1!=front);
		}
		
		
};
int main(){
	linkedqueue lq;
	lq.enqueue(10);
	lq.enqueue(20);
	lq.enqueue(30);
	lq.display();
	lq.dequeue();
	lq.display();
	
	
}
