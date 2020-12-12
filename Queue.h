/*
Programmer: Claire Meany
Assignment 1
IT 279
Description:
  Header file of Queue using a linked list
*/
#include <iostream>
#include <string>

using namespace std;

struct Node{
  int data;
  struct Node* next;
};

class Queue{
  private:
    Node *front, *end;
    int size;
  public:
    //default constructor
    Queue();
    //copy constructor
    Queue(const Queue& que);
    //destructor
    ~Queue();
    //enqueue data
    void enqueue(int enqueueData);
    //pop top of stack
    int dequeue();
    //see front of queue
    int peek();
    //check if queue is empty
    bool isEmpty();

};
