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
class linkqueue{
	public:
   
	queue *front;
	queue *rear;
	
	
	linkqueue(){
		front=NULL;
		rear=NULL;
	}
	void enqueue(int value){
		queue *newnode =new queue;
		newnode->marks=value;
		newnode->next=NULL;
		if(isempty()){
			front=rear=newnode;
			return;
    		}
    		rear->next=newnode;
    		rear=newnode;
	}
	void dequeue(){
		queue *temp=front;
		if(isempty()){
			cout<<"Queue is empty.."<<endl;
			
		}
		else{
			front=front->next;
			delete temp;
		}
	}
		void display(){
			queue *d =front;
			cout<<"Queue Elements: "<<endl;
			while(d!=NULL){
				cout<<d->marks<<endl;
				d=d->next;
			}
		}
		bool isempty(){
			if (front==NULL && rear==NULL){
				return true;
				
			}
			else{
				return false;
			}
		}
		
};
int main(){
	linkqueue lq;
	lq.enqueue(10);
	lq.enqueue(20);
	lq.enqueue(30);
	lq.enqueue(40);
	lq.display();
	lq.dequeue();
	lq.display();
	
	
}