#include <iostream>
using namespace std;

const int Capacity = 100;

class queue {
public:
    int array[Capacity];
    int front;
    int rear;
    int count;

    queue() {
        front = 0;
        rear = 0;
        count = 0;
    }

    void enqeue(int value) {
        if (count == Capacity) {
            cout << "Queue is full!" << endl;
            return;
        }
        array[rear] = value;
        rear = (rear + 1) % Capacity;
        count++;
    }

    int deqeque() {
        if (count == 0) {
            cout << "Queue is empty!!" << endl;
            return -1; 
        }
        int value = array[front];
        front = (front + 1) % Capacity;
        count--;
        return value;
    }
    void display()
    {
    for(int i=0;i<count;i++)
    {
    int index =(front+i)%Capacity;
    cout<<array[index]<<endl;
	}
	}
};


int main() {
    queue q1;
    q1.enqeue(10);
    q1.enqeue(20);
    q1.display();
    q1.deqeque() ;
    q1.display();
}
