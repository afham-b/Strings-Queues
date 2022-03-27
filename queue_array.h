//Afham Bashir 
#pragma once

#include <cstdlib>

template <typename T>
class queue {
private:
  const static size_t CAPACITY = 8;  //changing this will control the Capacity of the queue. 
  T data[CAPACITY]; 
  int index_front;      //variable to track the front of queue
  int count;            //variable that keeps track of the amount of queue size. 
public:
	queue () {index_front=0; count=0;}  
  //constructor that intializes the front index to zero and size of queue to zero. 
	T& back () {
  return data[((index_front+count-1)%CAPACITY)]; 
  }  //returns the back or the rear of the queue
  // using mod accounts for when a pushback happens past the last index of the queue
	bool empty () { 
    if (count <= 0) { 
      return true; }
    return false; 
  } // if the count of the queue is at or less than zero, then the queue is empty
	T& front () { return data[index_front]; } //front of queue 
	void pop () {
     if(index_front == (CAPACITY-1)){ 
       index_front= index_front%8; }
     else index_front++; 
     count--; } 
     //index front is increamented and count decreement for a pop
     //conditionl index front conditions are for if index_front goes past last index of queue
	void push (const T& val) { 
    data[(index_front+count)%CAPACITY] = val; 
    count++; 
   } //sets the next index as the user entered value and increaments count 
	size_t size () { 
  if ( count > CAPACITY)
    return CAPACITY; 
  return (count);  }
  //returns the size of the queue, but if the count is past last index of queue, returns Capacity of queue 
};
