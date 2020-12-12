/*
Programmer: Claire Meany
Description:
  Implementation of Queue.h using a linked list
*/
#include "Queue.h"

  //default constructor
  Queue::Queue(){
    size=0;
    front=NULL;
    end=NULL;

  }
  //copy constructor
  Queue::Queue(const Queue& que){
    size=que.size;

    struct Node* frontQue=que.front;
    Node* temp=new Node();
    temp=frontQue;
    front=temp;
    struct Node* end=temp;
    while(frontQue->next!=NULL){
      frontQue=frontQue->next;
      temp=new Node();
      temp=frontQue;
      end->next=temp;
      end=temp;
    }

  }
  //destructor
  Queue::~Queue(){
    while(!this->isEmpty()){
      this->dequeue();
    }
  }
  //enqueue data
  void Queue:: enqueue(int enqueueData){
    struct Node* temp = new Node();
    temp->data=enqueueData;
    if(this->isEmpty()){
      front=temp;
      end=temp;
      size++;
    }
    else{
      end->next=temp;
      end=temp;
      size++;
    }
  }
  //remove front of queue
  int Queue:: dequeue(){
    int num;
    struct Node* temp=front;
    num=temp->data;
    front=front->next;
    size--;
    if(this->isEmpty()){
      end=NULL;
    }

    delete temp;
    return num;
  }
  //see front of queue
  int Queue:: peek(){
    int num;
    num=front->data;
  }
  //check if queue is empty
  bool Queue:: isEmpty(){
    if(size==0)
      return true;
    else
      return false;
  }
